/*
 * XREFs of ExpPrepareToWakeResourceExclusive @ 0x14038FEE8
 * Callers:
 *     ExpReleaseFastResourceExclusive @ 0x14038FD10 (ExpReleaseFastResourceExclusive.c)
 *     ExpReleaseDisownedFastResourceExclusive @ 0x1405B4CC0 (ExpReleaseDisownedFastResourceExclusive.c)
 * Callees:
 *     KeCaptureWaitChainHeadEx @ 0x14038FF80 (KeCaptureWaitChainHeadEx.c)
 */

__int64 __fastcall ExpPrepareToWakeResourceExclusive(__int64 a1, _QWORD *a2, _QWORD *a3, int *a4)
{
  __int64 v4; // r11
  __int64 v6; // rcx
  int v8; // edx
  __int64 result; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = a1;
  v6 = 0LL;
  v10 = 0LL;
  if ( *(_DWORD *)(v4 + 72) )
  {
    *a2 = *(_QWORD *)(v4 + 32);
    v8 = *(_DWORD *)(v4 + 72);
    *(_DWORD *)(v4 + 72) = 0;
    *(_QWORD *)(v4 + 32) = 0LL;
  }
  else
  {
    if ( *(_DWORD *)(v4 + 76) )
    {
      KeCaptureWaitChainHeadEx(v4 + 40, a2, &v10);
      --*(_DWORD *)(v4 + 76);
      v8 = 1;
      v6 = v10;
      goto LABEL_8;
    }
    *a2 = 0LL;
    v8 = 0;
  }
  *(_WORD *)(v4 + 26) &= ~0x80u;
  if ( v8 )
  {
LABEL_8:
    result = (unsigned int)(v8 + *(_DWORD *)(v4 + 64) - 1);
    goto LABEL_6;
  }
  *(_WORD *)(v4 + 24) = 0;
  result = 0LL;
LABEL_6:
  *(_DWORD *)(v4 + 64) = result;
  *a4 = v8;
  *a3 = v6;
  return result;
}
