/*
 * XREFs of ExPoolSetLimit @ 0x14063AFCC
 * Callers:
 *     NtSetSystemInformation @ 0x1407D6120 (NtSetSystemInformation.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140348B40 (ExFreeHeapPool.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     ExpTrackTableInsertLimit @ 0x14063BE80 (ExpTrackTableInsertLimit.c)
 *     SeSinglePrivilegeCheck @ 0x140722A80 (SeSinglePrivilegeCheck.c)
 *     RtlRunOnceExecuteOnce @ 0x14075BD80 (RtlRunOnceExecuteOnce.c)
 *     ExSystemExceptionFilter @ 0x1409F8660 (ExSystemExceptionFilter.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall ExPoolSetLimit(void *Src, size_t Size, KPROCESSOR_MODE PreviousMode)
{
  _DWORD *v5; // rdi
  NTSTATUS inserted; // ebx
  _DWORD *Pool2; // rax
  int v8; // r8d
  __int64 v9; // rax
  size_t v10; // rax
  unsigned __int64 v11; // r9
  _BYTE *v12; // rcx
  int v13; // eax
  __int64 v14; // r8
  _BYTE *v15; // rdx

  v5 = 0LL;
  if ( PreviousMode && !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, PreviousMode) )
  {
    inserted = -1073741727;
    goto LABEL_30;
  }
  if ( Size < 0x38 )
    goto LABEL_5;
  inserted = RtlRunOnceExecuteOnce(&ExpPlInitOnceVar, ExpPlRunOnceInit, 0LL, 0LL);
  if ( inserted >= 0 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(256LL, Size, 1819242320LL);
    v5 = Pool2;
    if ( !Pool2 )
    {
      inserted = -1073741670;
      goto LABEL_30;
    }
    memmove(Pool2, Src, Size);
    if ( *v5 == 1 )
    {
      v8 = v5[1];
      if ( v8 )
      {
        v9 = 48LL * (unsigned int)(v8 - 1);
        if ( is_mul_ok((unsigned int)(v8 - 1), 0x30uLL) )
        {
          inserted = 0;
        }
        else
        {
          v9 = -1LL;
          inserted = -1073741675;
        }
        if ( inserted < 0 )
          goto LABEL_30;
        v10 = v9 + 56;
        if ( v10 < 0x38 )
        {
          inserted = -1073741675;
          goto LABEL_30;
        }
        if ( v10 > Size )
        {
LABEL_5:
          inserted = -1073741820;
          goto LABEL_30;
        }
        v11 = 0LL;
        v12 = v5 + 4;
LABEL_21:
        v13 = *((_DWORD *)v12 - 2);
        if ( v13 != 1819242320 && v13 )
        {
          v14 = 0LL;
          v15 = v12;
          while ( (*v15 & 0xF) == 0 && (v15[8] & 0xF) == 0 )
          {
            ++v14;
            v15 += 16;
            if ( v14 >= 2 )
            {
              ++v11;
              v12 += 48;
              if ( v11 < (unsigned int)v5[1] )
                goto LABEL_21;
              inserted = ExpTrackTableInsertLimit(v5, v15, v14, v11);
              if ( inserted >= 0 )
                inserted = 0;
              goto LABEL_30;
            }
          }
        }
      }
    }
    inserted = -1073741811;
  }
LABEL_30:
  if ( v5 )
    ExFreeHeapPool((ULONG_PTR)v5);
  return (unsigned int)inserted;
}
