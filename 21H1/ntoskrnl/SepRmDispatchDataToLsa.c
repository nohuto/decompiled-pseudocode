/*
 * XREFs of SepRmDispatchDataToLsa @ 0x140312098
 * Callers:
 *     SepRmCallLsa @ 0x140311E50 (SepRmCallLsa.c)
 *     SepAdtLogAuditRecord @ 0x1403BD520 (SepAdtLogAuditRecord.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1402D70B4 (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x1403F26F0 (ZwFreeVirtualMemory.c)
 *     ZwRequestWaitReplyPort @ 0x1403F2770 (ZwRequestWaitReplyPort.c)
 *     ZwRequestPort @ 0x1403F5210 (ZwRequestPort.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     memset @ 0x140408F80 (memset.c)
 *     SepAdtCopyToLsaSharedMemory @ 0x140920D54 (SepAdtCopyToLsaSharedMemory.c)
 *     SepAuditFailed @ 0x140920E20 (SepAuditFailed.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepRmDispatchDataToLsa(__int64 a1)
{
  int v2; // ebx
  _QWORD *ServerSiloGlobals; // rax
  HANDLE *v4; // rsi
  __int16 v5; // ax
  int v6; // r14d
  unsigned int v7; // eax
  NTSTATUS v8; // eax
  void *v9; // rcx
  SIZE_T v11; // r8
  void *v12; // rdx
  HANDLE v13; // rax
  int v14; // eax
  ULONG_PTR RegionSize; // [rsp+28h] [rbp-D8h] BYREF
  _BYTE RequestMessage[512]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE ReplyMessage[512]; // [rsp+230h] [rbp+130h] BYREF

  v2 = 0;
  memset(RequestMessage, 0, sizeof(RequestMessage));
  memset(ReplyMessage, 0, sizeof(ReplyMessage));
  ServerSiloGlobals = PsGetServerSiloGlobals(*(_QWORD *)(a1 + 56));
  v4 = (HANDLE *)(ServerSiloGlobals + 98);
  if ( ServerSiloGlobals[99] )
  {
    v5 = *(_WORD *)(a1 + 36);
    *(_DWORD *)&ReplyMessage[40] = 0;
    v6 = *(_DWORD *)(a1 + 16);
    *(_WORD *)&RequestMessage[2] = v5 + 48;
    *(_WORD *)RequestMessage = v5 + 8;
    *(_WORD *)ReplyMessage = *(_WORD *)(a1 + 48);
    *(_WORD *)&ReplyMessage[2] = *(_WORD *)ReplyMessage + 40;
    *(_DWORD *)&RequestMessage[40] = *(_DWORD *)(a1 + 32);
    if ( v6 == 1 )
    {
      v7 = *(_DWORD *)(a1 + 36);
      *(_DWORD *)&RequestMessage[44] = 1;
      if ( v7 <= 0x1D0 )
      {
        memmove(&RequestMessage[48], (const void *)(a1 + 24), v7);
        goto LABEL_5;
      }
    }
    else if ( (unsigned int)(v6 - 4) <= 2 )
    {
      v11 = *(unsigned int *)(a1 + 36);
      v12 = *(void **)(a1 + 24);
      if ( (unsigned int)v11 > 0x1D0 )
      {
        if ( (unsigned int)v11 > 0x1000 )
        {
          v14 = SepAdtCopyToLsaSharedMemory(*v4, v12, v11);
          v2 = v14;
          if ( v14 < 0 )
          {
            SepAuditFailed((unsigned int)v14);
LABEL_5:
            if ( v2 >= 0 )
            {
              if ( *(_DWORD *)(a1 + 32) != 3 || *(_QWORD *)(a1 + 40) )
                v8 = ZwRequestWaitReplyPort(v4[1], (PPORT_MESSAGE)RequestMessage, (PPORT_MESSAGE)ReplyMessage);
              else
                v8 = ZwRequestPort(v4[1], (PPORT_MESSAGE)RequestMessage);
              v2 = v8;
              if ( v8 >= 0 )
              {
                v9 = *(void **)(a1 + 40);
                if ( v9 )
                  memmove(v9, &ReplyMessage[44], *(unsigned int *)(a1 + 48));
                v2 = *(_DWORD *)&ReplyMessage[40];
              }
              if ( *(_DWORD *)&RequestMessage[44] == 3 )
              {
                RegionSize = 0LL;
                return (unsigned int)ZwFreeVirtualMemory(*v4, (PVOID *)&RequestMessage[48], &RegionSize, 0x8000u);
              }
            }
            return (unsigned int)v2;
          }
          v13 = 0LL;
          *(_DWORD *)&RequestMessage[44] = 3;
        }
        else
        {
          memmove(v4[8], v12, v11);
          v13 = v4[7];
          *(_DWORD *)&RequestMessage[44] = 2;
        }
        v6 = *(_DWORD *)(a1 + 16);
        *(_QWORD *)&RequestMessage[48] = v13;
        *(_DWORD *)RequestMessage = 3670032;
      }
      else
      {
        memmove(&RequestMessage[48], v12, v11);
        *(_DWORD *)&RequestMessage[44] = 1;
      }
      if ( (unsigned int)(v6 - 4) <= 1 )
        ExFreePoolWithTag(*(PVOID *)(a1 + 24), 0);
      goto LABEL_5;
    }
    return (unsigned int)-1073741811;
  }
  return 0LL;
}
