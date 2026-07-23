/*
 * XREFs of PiDqPnPGetObjectPropertyKeys @ 0x1408A4A78
 * Callers:
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x1408A43B0 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1408A4640 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     _PnpGetGenericStorePropertyKeys @ 0x140768140 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpGetObjectPropertyKeys @ 0x140976B08 (_PnpGetObjectPropertyKeys.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDqPnPGetObjectPropertyKeys(int a1, int a2, __int64 a3, __int64 a4, PVOID *a5, unsigned int *a6)
{
  SIZE_T v9; // rbx
  PVOID PoolWithTag; // rax
  unsigned __int64 v11; // rdx
  signed int ObjectPropertyKeys; // eax
  int v13; // ebx
  __int64 v14; // rcx
  int v16; // [rsp+20h] [rbp-48h]

  v9 = 6000LL;
  *a5 = 0LL;
  while ( 1 )
  {
    if ( *a5 )
      ExFreePoolWithTag(*a5, 0x58706E50u);
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, v9, 0x58706E50u);
    *a5 = PoolWithTag;
    if ( !PoolWithTag )
      break;
    *a6 = 0;
    v11 = v9 / 0x14;
    if ( a2 )
      ObjectPropertyKeys = PnpGetObjectPropertyKeys(
                             PiPnpRtlCtx,
                             a1,
                             a2,
                             a3,
                             v16,
                             1,
                             (__int64)PoolWithTag,
                             v11,
                             (__int64)a6);
    else
      ObjectPropertyKeys = PnpGetGenericStorePropertyKeys(
                             *(__int64 *)&PiPnpRtlCtx,
                             a3,
                             0LL,
                             1,
                             (__int64)PoolWithTag,
                             v11,
                             a6);
    v13 = ObjectPropertyKeys;
    if ( ObjectPropertyKeys != -1073741789 )
      goto LABEL_13;
    v14 = *a6;
    if ( (unsigned __int64)(20 * v14) > 0xFFFFFFFF )
    {
      v13 = -1073741675;
      goto LABEL_14;
    }
    v9 = (unsigned int)(20 * v14);
  }
  v13 = -1073741670;
LABEL_13:
  if ( v13 >= 0 )
    goto LABEL_15;
LABEL_14:
  *a6 = 0;
LABEL_15:
  if ( !*a6 && *a5 )
  {
    ExFreePoolWithTag(*a5, 0x58706E50u);
    *a5 = 0LL;
  }
  return (unsigned int)v13;
}
