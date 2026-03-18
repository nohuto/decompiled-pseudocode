/*
 * XREFs of EtwpFreeFilterInfo @ 0x140635F90
 * Callers:
 *     EtwpNotifyGuid @ 0x1406329B8 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x140635748 (EtwpEnableGuid.c)
 * Callees:
 *     EtwpFreeEventNameFilter @ 0x14093D5A8 (EtwpFreeEventNameFilter.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
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
