/*
 * XREFs of ObpInsertCallbackByAltitude @ 0x1407B4D84
 * Callers:
 *     ObRegisterCallbacks @ 0x1407B4BB0 (ObRegisterCallbacks.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     ExReleasePushLockEx @ 0x140260EE0 (ExReleasePushLockEx.c)
 *     RtlCompareAltitudes @ 0x14030A750 (RtlCompareAltitudes.c)
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
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  const UNICODE_STRING *v14; // r15
  LONG v15; // eax
  bool v16; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = (_QWORD *)(a1 + 200);
  v4 = 0;
  --CurrentThread->SpecialApcDisable;
  v6 = a1 + 184;
  ExAcquirePushLockExclusiveEx(a1 + 184, 0LL);
  v7 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 == v3 )
    goto LABEL_2;
  v14 = (const UNICODE_STRING *)a2[3];
  while ( 1 )
  {
    v15 = RtlCompareAltitudes((PCUNICODE_STRING)(v7[3] + 16LL), v14 + 1);
    v16 = v15 == 0;
    if ( v15 <= 0 )
      break;
    v7 = (_QWORD *)*v7;
    if ( v7 == v3 )
    {
      v16 = v15 == 0;
      break;
    }
  }
  if ( !v16 )
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
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
  return v4;
}
