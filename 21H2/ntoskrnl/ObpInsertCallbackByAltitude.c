/*
 * XREFs of ObpInsertCallbackByAltitude @ 0x1407CA9E4
 * Callers:
 *     ObRegisterCallbacks @ 0x1407CA810 (ObRegisterCallbacks.c)
 * Callees:
 *     RtlCompareAltitudes @ 0x1402BAD10 (RtlCompareAltitudes.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x14034AE90 (ExReleasePushLockEx.c)
 */

__int64 __fastcall ObpInsertCallbackByAltitude(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v3; // r14
  unsigned int v4; // esi
  ULONG_PTR v6; // rbp
  _QWORD *v7; // rbx
  __int64 *v8; // rax
  __int64 v9; // rcx
  const UNICODE_STRING *v11; // r15
  LONG v12; // eax
  bool v13; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = (_QWORD *)(a1 + 200);
  v4 = 0;
  --CurrentThread->SpecialApcDisable;
  v6 = a1 + 184;
  ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
  v7 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 == v3 )
    goto LABEL_2;
  v11 = (const UNICODE_STRING *)a2[3];
  while ( 1 )
  {
    v12 = RtlCompareAltitudes((PCUNICODE_STRING)(v7[3] + 16LL), v11 + 1);
    v13 = v12 == 0;
    if ( v12 <= 0 )
      break;
    v7 = (_QWORD *)*v7;
    if ( v7 == v3 )
    {
      v13 = v12 == 0;
      break;
    }
  }
  if ( !v13 )
  {
LABEL_2:
    v8 = (__int64 *)v7[1];
    v9 = *v8;
    if ( *(__int64 **)(*v8 + 8) != v8 )
      __fastfail(3u);
    *a2 = v9;
    a2[1] = v8;
    *(_QWORD *)(v9 + 8) = a2;
    *v8 = (__int64)a2;
  }
  else
  {
    v4 = -1071906799;
  }
  ExReleasePushLockEx(v6, 0LL);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  return v4;
}
