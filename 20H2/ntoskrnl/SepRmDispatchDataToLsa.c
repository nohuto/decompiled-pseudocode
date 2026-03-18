/*
 * XREFs of SepRmDispatchDataToLsa @ 0x1403204A8
 * Callers:
 *     SepRmCallLsa @ 0x140320260 (SepRmCallLsa.c)
 *     SepAdtLogAuditRecord @ 0x1403C1C04 (SepAdtLogAuditRecord.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140245E34 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1403F8530 (ZwFreeVirtualMemory.c)
 *     ZwRequestWaitReplyPort @ 0x1403F85B0 (ZwRequestWaitReplyPort.c)
 *     ZwRequestPort @ 0x1403FB070 (ZwRequestPort.c)
 *     memmove @ 0x140411040 (memmove.c)
 *     memset @ 0x140411300 (memset.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x14092805C (SepAdtCopyToLsaSharedMemory.c)
 *     SepAuditFailed @ 0x140928130 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmDispatchDataToLsa(__int64 a1)
{
  int v2; // ebx
  _QWORD *ServerSiloGlobals; // rax
  char *v4; // rsi
  __int16 v5; // ax
  int v6; // r14d
  unsigned int v7; // eax
  int v8; // eax
  void *v9; // rcx
  size_t v11; // r8
  const void *v12; // rdx
  void *v13; // rax
  int v14; // eax
  ULONG_PTR RegionSize; // [rsp+28h] [rbp-D8h] BYREF
  PVOID v16[64]; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v17[128]; // [rsp+230h] [rbp+130h] BYREF

  v2 = 0;
  memset(v16, 0, sizeof(v16));
  memset(v17, 0, sizeof(v17));
  ServerSiloGlobals = PsGetServerSiloGlobals(*(_QWORD *)(a1 + 56));
  v4 = (char *)(ServerSiloGlobals + 98);
  if ( ServerSiloGlobals[99] )
  {
    v5 = *(_WORD *)(a1 + 36);
    v17[10] = 0;
    v6 = *(_DWORD *)(a1 + 16);
    WORD1(v16[0]) = v5 + 48;
    LOWORD(v16[0]) = v5 + 8;
    LOWORD(v17[0]) = *(_WORD *)(a1 + 48);
    HIWORD(v17[0]) = LOWORD(v17[0]) + 40;
    LODWORD(v16[5]) = *(_DWORD *)(a1 + 32);
    if ( v6 == 1 )
    {
      v7 = *(_DWORD *)(a1 + 36);
      HIDWORD(v16[5]) = 1;
      if ( v7 <= 0x1D0 )
      {
        memmove(&v16[6], (const void *)(a1 + 24), v7);
        goto LABEL_5;
      }
    }
    else if ( (unsigned int)(v6 - 4) <= 2 )
    {
      v11 = *(unsigned int *)(a1 + 36);
      v12 = *(const void **)(a1 + 24);
      if ( (unsigned int)v11 > 0x1D0 )
      {
        if ( (unsigned int)v11 > 0x1000 )
        {
          v14 = SepAdtCopyToLsaSharedMemory(*(HANDLE *)v4);
          v2 = v14;
          if ( v14 < 0 )
          {
            SepAuditFailed((unsigned int)v14);
LABEL_5:
            if ( v2 >= 0 )
            {
              if ( *(_DWORD *)(a1 + 32) != 3 || *(_QWORD *)(a1 + 40) )
                v8 = ZwRequestWaitReplyPort(*((_QWORD *)v4 + 1), v16, v17);
              else
                v8 = ZwRequestPort(*((_QWORD *)v4 + 1), v16);
              v2 = v8;
              if ( v8 >= 0 )
              {
                v9 = *(void **)(a1 + 40);
                if ( v9 )
                  memmove(v9, &v17[11], *(unsigned int *)(a1 + 48));
                v2 = v17[10];
              }
              if ( HIDWORD(v16[5]) == 3 )
              {
                RegionSize = 0LL;
                return (unsigned int)ZwFreeVirtualMemory(*(HANDLE *)v4, &v16[6], &RegionSize, 0x8000u);
              }
            }
            return (unsigned int)v2;
          }
          v13 = 0LL;
          HIDWORD(v16[5]) = 3;
        }
        else
        {
          memmove(*((void **)v4 + 8), v12, v11);
          v13 = (void *)*((_QWORD *)v4 + 7);
          HIDWORD(v16[5]) = 2;
        }
        v6 = *(_DWORD *)(a1 + 16);
        v16[6] = v13;
        LODWORD(v16[0]) = 3670032;
      }
      else
      {
        memmove(&v16[6], v12, v11);
        HIDWORD(v16[5]) = 1;
      }
      if ( (unsigned int)(v6 - 4) <= 1 )
        ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
  return 0LL;
}
