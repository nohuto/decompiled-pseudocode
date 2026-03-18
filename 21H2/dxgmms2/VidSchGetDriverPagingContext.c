/*
 * XREFs of VidSchGetDriverPagingContext @ 0x1C00F4600
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1C00959B0 (VidSchiSubmitPagingCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetDriverPagingContext(_QWORD *a1, unsigned int a2, char a3)
{
  __int64 v3; // rax
  __int64 v5; // rax

  v3 = *(_QWORD *)(a1[34] + 8LL * a2);
  if ( v3 )
    return *(_QWORD *)(v3 + 48);
  if ( a3 )
    v5 = a1[36];
  else
    v5 = a1[33];
  return *(_QWORD *)(*(_QWORD *)(v5 + 8LL * a2) + 64LL);
}
