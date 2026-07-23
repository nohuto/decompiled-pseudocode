/*
 * XREFs of EtwpFreeFilterInfo @ 0x1406B9F2C
 * Callers:
 *     EtwpNotifyGuid @ 0x1406B8AE4 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1406B96E4 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpFreeEventNameFilter @ 0x140940D10 (EtwpFreeEventNameFilter.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeFilterInfo(__int64 a1)
{
  PVOID *v2; // rdi
  __int64 v3; // rsi
  PVOID *v4; // rdi
  __int64 v5; // rsi
  void *v6; // rcx
  void *v7; // rcx

  v2 = (PVOID *)a1;
  v3 = 4LL;
  do
  {
    if ( *v2 )
      ExFreePoolWithTag(*v2, 0);
    ++v2;
    --v3;
  }
  while ( v3 );
  v4 = (PVOID *)(a1 + 32);
  v5 = 2LL;
  do
  {
    if ( *v4 )
      ExFreePoolWithTag(*v4, 0);
    ++v4;
    --v5;
  }
  while ( v5 );
  v6 = *(void **)(a1 + 48);
  if ( v6 )
    EtwpFreeEventNameFilter(v6);
  v7 = *(void **)(a1 + 72);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
}
