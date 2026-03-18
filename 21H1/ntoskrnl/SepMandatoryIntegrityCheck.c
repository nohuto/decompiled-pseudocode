/*
 * XREFs of SepMandatoryIntegrityCheck @ 0x140209E00
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1402092C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x140258400 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x140370184 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405E1B90 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140261420 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x140261460 (ExReleaseResourceLite.c)
 *     ExpAcquireResourceSharedLite @ 0x1402620D0 (ExpAcquireResourceSharedLite.c)
 *     ExAcquireFastResourceShared @ 0x14038BE10 (ExAcquireFastResourceShared.c)
 *     ExpAllocateOwnerEntryForLegacyShim @ 0x14038C63C (ExpAllocateOwnerEntryForLegacyShim.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memcmp @ 0x1403CE5A0 (memcmp.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SepMandatoryIntegrityCheck(
        int *a1,
        __int64 CurrentIrql,
        char a3,
        __int64 a4,
        char a5,
        char a6,
        __int64 a7)
{
  int v7; // eax
  char v8; // r15
  int v9; // ebx
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // rsi
  int v14; // eax
  unsigned __int16 *v15; // rsi
  __int64 v16; // rax
  _WORD **v17; // rax
  _WORD *v18; // r14
  int v19; // eax
  int v20; // eax
  unsigned __int16 v21; // bp
  unsigned __int16 v22; // r12
  int v23; // ecx
  int v24; // ecx
  int v25; // eax
  __int16 v26; // cx
  bool v27; // zf
  unsigned int v29; // edx
  unsigned int v30; // r14d
  char v31; // dl
  char v32; // si
  char v33; // r8
  char v34; // bp
  __int64 result; // rax
  __int64 v36; // rax
  char v37; // dl
  int v38; // esi
  int v39; // r11d
  int v40; // ecx
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v42; // r14
  __int64 v43; // rcx
  struct _KTHREAD *v44; // r8
  void *OwnerEntryForLegacyShim; // r12
  int v46; // ecx
  int v47; // r10d
  char v48; // [rsp+30h] [rbp-58h]
  char v49; // [rsp+38h] [rbp-50h]

  v7 = *(_DWORD *)(a4 + 212);
  v8 = 0;
  v9 = 0;
  v48 = 0;
  *(_DWORD *)(a7 + 8) = v7;
  if ( (v7 & 0xFFFFFFFD) != 0 )
  {
    if ( a3 )
      goto LABEL_47;
    v11 = *(_WORD *)(CurrentIrql + 2);
    if ( (v11 & 0x10) == 0 )
      goto LABEL_47;
    if ( v11 < 0 )
    {
      v36 = *(unsigned int *)(CurrentIrql + 12);
      if ( !(_DWORD)v36 )
        goto LABEL_47;
      v12 = CurrentIrql + v36;
    }
    else
    {
      v12 = *(_QWORD *)(CurrentIrql + 24);
    }
    if ( v12 )
    {
      v13 = v12 + 8;
      CurrentIrql = 0LL;
      if ( *(_WORD *)(v12 + 4) )
      {
        while ( *(_BYTE *)v13 != 17 )
        {
          CurrentIrql = (unsigned int)(CurrentIrql + 1);
          v13 += *(unsigned __int16 *)(v13 + 2);
          if ( (unsigned int)CurrentIrql >= *(unsigned __int16 *)(v12 + 4) )
            goto LABEL_47;
        }
        if ( (*(_BYTE *)(v13 + 1) & 8) == 0 )
        {
          v14 = *(_DWORD *)(v13 + 4);
          v15 = (unsigned __int16 *)(v13 + 8);
          v49 = v14;
LABEL_11:
          if ( a5 )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            v42 = *(_QWORD *)(a4 + 48);
            v43 = *(unsigned __int16 *)(v42 + 26);
            if ( (v43 & 0x41) == 1 )
              KeBugCheckEx(0x1C6u, 0xFuLL, v42, 0LL, 0LL);
            LOWORD(v43) = *(_WORD *)(v42 + 26) & 1;
            if ( (_WORD)v43 )
            {
              CurrentIrql = KeGetCurrentIrql();
              v44 = KeGetCurrentThread();
              if ( (unsigned __int8)CurrentIrql > 1u )
                KeBugCheckEx(0x1C6u, 0LL, (unsigned __int8)CurrentIrql, 1uLL, 0LL);
              if ( (v44->ApcState.InProgressFlags & 2) != 0 )
                KeBugCheckEx(0x1C6u, 6uLL, 0LL, 0LL, 0LL);
              if ( !(_BYTE)CurrentIrql && (v44->MiscFlags & 0x400) == 0 && !v44->WaitBlock[3].SpareLong )
                KeBugCheckEx(0x1C6u, 7uLL, 0LL, 0LL, 0LL);
            }
            if ( (_WORD)v43 )
            {
              OwnerEntryForLegacyShim = (void *)ExpAllocateOwnerEntryForLegacyShim(v43, CurrentIrql);
              if ( !(unsigned __int8)ExAcquireFastResourceShared(v42, (ULONG_PTR)OwnerEntryForLegacyShim) )
                ExFreePoolWithTag(OwnerEntryForLegacyShim, 0);
            }
            else
            {
              LOBYTE(CurrentIrql) = 1;
              ExpAcquireResourceSharedLite(*(_QWORD *)(a4 + 48), CurrentIrql);
            }
          }
          v16 = *(unsigned int *)(a4 + 208);
          if ( (_DWORD)v16 == -1 || (v17 = (_WORD **)(*(_QWORD *)(a4 + 152) + 16 * v16)) == 0LL )
            v18 = SeUntrustedMandatorySid;
          else
            v18 = *v17;
          if ( a6 )
            v18 = SepDefaultMandatorySid;
          if ( a5 )
          {
            ExReleaseResourceLite(*(PERESOURCE *)(a4 + 48));
            KeLeaveCriticalRegion();
          }
          v19 = *((unsigned __int8 *)v15 + 1);
          if ( (_BYTE)v19 )
            v20 = *(_DWORD *)&v15[2 * (v19 - 1) + 4];
          else
            v20 = 0;
          *(_DWORD *)(a7 + 12) = v20;
          v21 = *v15;
          v22 = *v18;
          if ( *v15 == *v18 && !memcmp(v15, v18, 4 * ((unsigned __int64)*v15 >> 8) + 8) )
            goto LABEL_50;
          v23 = *(_DWORD *)(v18 + 1);
          if ( !v23 )
            v23 = (unsigned __int16)v18[3] - 4096;
          if ( v23 )
            goto LABEL_92;
          v24 = *(_DWORD *)(v15 + 1);
          if ( !v24 )
            v24 = v15[3] - 4096;
          if ( v24 )
          {
LABEL_92:
            v33 = 0;
            v30 = -1073741811;
            v34 = 0;
LABEL_45:
            result = v30;
            *(_BYTE *)(a7 + 4) = v34;
            *(_DWORD *)a7 = v9;
            *(_BYTE *)(a7 + 5) = v8;
            *(_BYTE *)(a7 + 6) = v33;
            return result;
          }
          LOWORD(v25) = HIBYTE(v22);
          v26 = HIBYTE(v21);
          if ( v22 == v21
            && (v25 = memcmp(v18, v15, 4LL * HIBYTE(v22) + 8),
                LOBYTE(v26) = HIBYTE(v21),
                v27 = v25 == 0,
                LOBYTE(v25) = HIBYTE(v22),
                v27) )
          {
LABEL_50:
            v30 = 0;
          }
          else
          {
            if ( (_BYTE)v25 )
            {
              v29 = *(_DWORD *)&v18[2 * (unsigned __int8)v25 + 2];
              v30 = 0;
            }
            else
            {
              v30 = 0;
              v29 = 0;
            }
            if ( (_BYTE)v26 && v29 < *(_DWORD *)&v15[2 * (unsigned __int8)v26 + 2] )
            {
              v31 = 0;
LABEL_38:
              if ( (*(_DWORD *)(a7 + 8) & 1) != 0 && (v8 = 1, v9 = *a1 | ~*a1 & a1[2] | 0x120000, v31) )
              {
                v32 = 1;
                v48 = 1;
                v9 |= a1[3] | 0x11FFFFF;
              }
              else
              {
                v32 = 0;
              }
              v33 = v8;
              if ( v31 )
              {
                v34 = v48;
              }
              else
              {
                v37 = 0;
                if ( (v49 & 2) == 0 )
                  v37 = v8;
                if ( (v49 & 4) != 0 )
                  v33 = 0;
                v34 = 0;
                if ( (v49 & 1) == 0 )
                  v34 = v32;
                if ( (v49 & 2) != 0 )
                {
                  v38 = 0;
                  if ( v34 )
                    v38 = a1[1] | 0x10D0000;
                  v39 = *a1;
                  if ( v33 )
                    v38 |= ~v39 & a1[2] | 0x100000;
                  v9 &= v38 | ~(v39 | 0x20000);
                }
                if ( (v49 & 4) != 0 )
                {
                  v46 = 0;
                  if ( v34 )
                    v46 = a1[1] | 0x10D0000;
                  v47 = *a1;
                  if ( v37 )
                    v46 |= v47 | 0x20000;
                  v9 &= ~(~v46 & (~v47 & a1[2] | 0x100000));
                }
                v8 = v37;
                if ( (v49 & 1) != 0 )
                {
                  v40 = 0;
                  if ( v33 )
                    v40 = ~*a1 & a1[2] | 0x100000;
                  if ( v37 )
                    v40 |= *a1 | 0x20000;
                  v9 &= ~(~v40 & (a1[1] | 0x10D0000));
                }
              }
              if ( (*(_QWORD *)(a4 + 72) & 0x100000000LL) != 0 )
                v9 |= 0x80000u;
              goto LABEL_45;
            }
          }
          v31 = 1;
          goto LABEL_38;
        }
      }
    }
LABEL_47:
    v15 = (unsigned __int16 *)SepDefaultMandatorySid;
    v49 = 1;
    goto LABEL_11;
  }
  *(_DWORD *)a7 = a1[3];
  result = 0LL;
  *(_WORD *)(a7 + 4) = 257;
  *(_BYTE *)(a7 + 6) = 1;
  return result;
}
