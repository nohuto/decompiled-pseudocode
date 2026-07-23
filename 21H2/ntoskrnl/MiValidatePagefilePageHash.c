/*
 * XREFs of MiValidatePagefilePageHash @ 0x14055D95C
 * Callers:
 *     MiWaitForInPageComplete @ 0x140325F40 (MiWaitForInPageComplete.c)
 *     MiMakeOutswappedPageResident @ 0x14052BD00 (MiMakeOutswappedPageResident.c)
 * Callees:
 *     MiGetPagingFileOffset @ 0x14025F240 (MiGetPagingFileOffset.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1402CB5C0 (MmMapLockedPagesSpecifyCache.c)
 *     MiLockPageInline @ 0x14030AB80 (MiLockPageInline.c)
 *     MiComputePageHash @ 0x14038A2E0 (MiComputePageHash.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiComparePageHash @ 0x14055D580 (MiComparePageHash.c)
 *     MiObtainPagefileHashes @ 0x14055D800 (MiObtainPagefileHashes.c)
 */

__int64 __fastcall MiValidatePagefilePageHash(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  __int64 v4; // r10
  __int64 v5; // r13
  __int64 *v6; // r12
  __int64 v7; // rdx
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rbx
  _QWORD *v10; // rdi
  unsigned __int64 v11; // rax
  __int64 v12; // r14
  _QWORD *v13; // rsi
  __int64 v14; // rbx
  unsigned __int64 v15; // r15
  unsigned int v16; // eax
  __int64 v17; // rdi
  ULONG_PTR v18; // rbp
  unsigned int PagingFileOffset; // eax
  ULONG_PTR v20; // rsi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  int v23; // eax
  bool v24; // zf
  __int64 v26; // rax
  ULONG_PTR BugCheckParameter4; // rdi
  int v28; // eax
  _QWORD *v29; // [rsp+30h] [rbp-A8h]
  __int64 v30; // [rsp+38h] [rbp-A0h]
  __int64 v31; // [rsp+40h] [rbp-98h]
  unsigned __int64 v32; // [rsp+48h] [rbp-90h]
  unsigned int v33; // [rsp+50h] [rbp-88h]
  unsigned int v34[16]; // [rsp+60h] [rbp-78h] BYREF

  v4 = a1 + 272;
  if ( *(_QWORD *)(a1 + 256) )
    v4 = *(_QWORD *)(a1 + 256);
  v5 = 0LL;
  v33 = 0;
  v31 = 0LL;
  v6 = (__int64 *)(v4 + 48);
  v7 = (*(_DWORD *)(v4 + 32) + *(_DWORD *)(v4 + 44)) & 0xFFF;
  v8 = 8 * ((unsigned __int64)(v7 + *(_QWORD *)(a1 + 88) + 4095LL) >> 12);
  v9 = v8 + v4 + 48;
  v30 = v8;
  v32 = v9;
  if ( (*(_BYTE *)(v4 + 10) & 5) != 0 )
    v10 = *(_QWORD **)(v4 + 24);
  else
    v10 = MmMapLockedPagesSpecifyCache((PMDL)v4, 0, MmCached, 0LL, 0, 0xC0000010);
  if ( (unsigned __int64)v6 < v9 )
  {
    v11 = v9;
    while ( 1 )
    {
      v12 = *v6;
      v13 = v10;
      v29 = v10;
      v14 = 48 * *v6 - 0x58000000000LL;
      if ( v14 != qword_140C4EDB0 )
        break;
LABEL_30:
      v8 -= 8LL;
      v10 = v13 + 512;
      v5 = (unsigned int)(v5 + 1);
      v30 = v8;
      ++v6;
      if ( !v13 )
        v10 = 0LL;
      if ( (unsigned __int64)v6 >= v11 )
        return 0LL;
    }
    v15 = (unsigned __int8)MiLockPageInline(48 * v12 - 0x58000000000LL, v7, a3, SchedulerAssist);
    if ( (*(_QWORD *)(v14 + 24) & 0x4000000000000000LL) != 0 )
    {
LABEL_20:
      if ( (_BYTE)v15 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v15 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v7 = -1LL << ((unsigned __int8)v15 + 1);
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v23 = ~(unsigned __int16)v7;
              v24 = (v23 & SchedulerAssist[5]) == 0;
              a3 = (unsigned int)v23 & SchedulerAssist[5];
              SchedulerAssist[5] = a3;
              if ( v24 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8(v15);
      }
      v11 = v32;
      goto LABEL_30;
    }
    v7 = (*(_DWORD *)(v14 + 16) >> 5) & 0x1F;
    if ( (dword_140CFB180 & 1) == 0
      && (_DWORD)v7 != 31
      && ((unsigned int)v7 >> 3 == 3 && ((*(_DWORD *)(v14 + 16) >> 5) & 7) != 0 || (unsigned int)v7 >> 3 == 1) )
    {
      v13 = v10;
      goto LABEL_20;
    }
    v16 = MiComputePageHash(48 * v12 - 0x58000000000LL, v10);
    v17 = v31;
    v18 = v16;
    if ( !v31 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(qword_140C4E688 + 8 * ((*(_QWORD *)(v14 + 40) >> 39) & 0x3FFLL))
                      + 8LL * ((unsigned __int8)HIBYTE(*(_WORD *)(v14 + 16)) >> 4)
                      + 6944);
      v31 = v17;
    }
    PagingFileOffset = MiGetPagingFileOffset(v14 + 16);
    v20 = PagingFileOffset;
    if ( !PagingFileOffset )
    {
      v31 = 0LL;
LABEL_19:
      v8 = v30;
      v13 = v29;
      goto LABEL_20;
    }
    if ( (unsigned int)v5 >= v33 )
    {
      v26 = v30 >> 3;
      if ( (unsigned int)(v30 >> 3) > 0x10 )
        LODWORD(v26) = 16;
      v33 = v26;
      MiObtainPagefileHashes(v17, v20, v26, v34);
      v5 = 0LL;
    }
    BugCheckParameter4 = v34[v5];
    if ( (_DWORD)v18 == (_DWORD)BugCheckParameter4
      || (*(_QWORD *)(v14 + 24) & 0x4000000000000000LL) != 0
      || (_DWORD)BugCheckParameter4 == 2 )
    {
      goto LABEL_19;
    }
    if ( (_DWORD)BugCheckParameter4 )
    {
      if ( byte_140C4E8C0 == 1 )
        goto LABEL_19;
      v28 = -1073741761;
    }
    else
    {
      v28 = MiComparePageHash(v31, v20, v18);
    }
    if ( v28 < 0 )
    {
      ++dword_140C4E808;
      qword_140C4E7B0 = v12;
      KeBugCheckEx(0x1Au, 0x3FuLL, v20, v18, BugCheckParameter4);
    }
    goto LABEL_19;
  }
  return 0LL;
}
