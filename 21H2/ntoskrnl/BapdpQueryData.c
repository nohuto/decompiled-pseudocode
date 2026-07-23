/*
 * XREFs of BapdpQueryData @ 0x140A42734
 * Callers:
 *     BapdpProcessEtwEvents @ 0x1403AF6A8 (BapdpProcessEtwEvents.c)
 *     BapdpProcessEDrvHintInfo @ 0x140A41E2C (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x140A41EBC (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessWmdResults @ 0x140A41F4C (BapdpProcessWmdResults.c)
 *     BapdpProcessBootMetadata @ 0x140A42040 (BapdpProcessBootMetadata.c)
 *     BapdpProcessHSTIResults @ 0x140A420EC (BapdpProcessHSTIResults.c)
 *     BapdpProcessResumeInformation @ 0x140A4226C (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140A4233C (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessVsmKeyBlobs @ 0x140A4240C (BapdpProcessVsmKeyBlobs.c)
 *     BapdpRegisterWbclData @ 0x140A42620 (BapdpRegisterWbclData.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall BapdpQueryData(__int64 a1, _QWORD *a2, int a3, void *a4, unsigned int *a5)
{
  __int64 *v8; // rdx
  int i; // r9d
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int v12; // eax

  if ( !a5 || !a2 || *a5 && !a4 )
    return 3221225485LL;
  v8 = (__int64 *)qword_140CF2A30;
  for ( i = 0; ; ++i )
  {
    while ( 1 )
    {
      if ( v8 == &qword_140CF2A30 )
        return 3221226021LL;
      v10 = v8[2];
      v8 = (__int64 *)*v8;
      if ( (unsigned int)(*(_DWORD *)(v10 + 32) - 1) <= 1 )
      {
        v11 = *a2 - *(_QWORD *)(v10 + 16);
        if ( *a2 == *(_QWORD *)(v10 + 16) )
          v11 = a2[1] - *(_QWORD *)(v10 + 24);
        if ( !v11 )
          break;
      }
    }
    if ( a3 == i )
      break;
  }
  v12 = *(_DWORD *)(v10 + 36);
  if ( *a5 < v12 )
  {
    *a5 = v12;
    return 3221225507LL;
  }
  else
  {
    memmove(a4, (const void *)(v10 + *(unsigned int *)(v10 + 40)), v12);
    return 0LL;
  }
}
