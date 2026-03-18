/*
 * XREFs of PiDqPnPGetObjectPropertyKeys @ 0x14069717C
 * Callers:
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140698510 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x14094A034 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 * Callees:
 *     _PnpGetObjectPropertyKeys @ 0x14069726C (_PnpGetObjectPropertyKeys.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x140698AAC (_PnpGetGenericStorePropertyKeys.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall PiDqPnPGetObjectPropertyKeys(int a1, int a2, __int64 a3, __int64 a4, PVOID *a5, _DWORD *a6)
{
  unsigned __int64 v9; // rbx
  __int64 Pool2; // rax
  __int64 v11; // r9
  int ObjectPropertyKeys; // eax
  unsigned int v13; // ebx
  __int64 v15; // rcx
  int v16; // [rsp+20h] [rbp-48h]

  v9 = 6000LL;
  *a5 = 0LL;
  while ( 1 )
  {
    if ( *a5 )
      ExFreePoolWithTag(*a5, 0x58706E50u);
    Pool2 = ExAllocatePool2(256LL, v9, 1483763280LL);
    *a5 = (PVOID)Pool2;
    if ( !Pool2 )
    {
      v13 = -1073741670;
      goto LABEL_11;
    }
    *a6 = 0;
    if ( a2 )
    {
      ObjectPropertyKeys = PnpGetObjectPropertyKeys(PiPnpRtlCtx, a1, a2, a3, v16, 1, Pool2, v9 / 0x14, (__int64)a6);
    }
    else
    {
      LOBYTE(v11) = 1;
      v16 = Pool2;
      ObjectPropertyKeys = PnpGetGenericStorePropertyKeys(*(_QWORD *)&PiPnpRtlCtx, a3, 0LL, v11);
    }
    v13 = ObjectPropertyKeys;
    if ( ObjectPropertyKeys != -1073741789 )
      break;
    v15 = (unsigned int)*a6;
    if ( (unsigned __int64)(20 * v15) > 0xFFFFFFFF )
    {
      v13 = -1073741675;
      goto LABEL_11;
    }
    v9 = (unsigned int)(20 * v15);
  }
  if ( ObjectPropertyKeys >= 0 )
    goto LABEL_9;
LABEL_11:
  *a6 = 0;
LABEL_9:
  if ( !*a6 && *a5 )
  {
    ExFreePoolWithTag(*a5, 0x58706E50u);
    *a5 = 0LL;
  }
  return v13;
}
