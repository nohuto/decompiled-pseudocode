/*
 * XREFs of ?IsAnalogExclusive@CFlipToken@@UEBA_NXZ @ 0x1C001A820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CFlipToken::IsAnalogExclusive(CFlipToken *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 v3; // rcx
  char v4; // bl

  v1 = *((_QWORD *)this + 4);
  KeEnterCriticalRegion();
  v2 = v1 + 48;
  ExAcquirePushLockSharedEx(v1 + 48, 0LL);
  v3 = v1 + 48;
  v4 = *(_BYTE *)(v1 + 153);
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)(v2 + 8) )
  {
    *(_QWORD *)(v2 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v3, 0LL);
  }
  else
  {
    ExReleasePushLockSharedEx(v3, 0LL);
  }
  KeLeaveCriticalRegion();
  return v4 != 0;
}
