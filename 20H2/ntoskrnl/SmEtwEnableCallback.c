/*
 * XREFs of SmEtwEnableCallback @ 0x1407B7F50
 * Callers:
 *     <none>
 * Callees:
 *     SmKmStoreReferenceEx @ 0x140256DEC (SmKmStoreReferenceEx.c)
 *     SmEtwEnabled @ 0x140258658 (SmEtwEnabled.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14059DD34 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmKmEtwLogStoreRundown @ 0x1407B7FA8 (SmKmEtwLogStoreRundown.c)
 */

void __fastcall SmEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  unsigned int i; // ebx
  unsigned __int64 v5; // rax

  if ( ControlCode <= 1 && (dword_140D244FC = MatchAnyKeyword | 0x40, ControlCode == 1) || ControlCode == 2 )
  {
    SmKmEtwLogStoreRundown(&qword_140D244F0, &SmGlobals, Level);
    if ( SmEtwEnabled(3) )
    {
      for ( i = 0; i < 0x400; ++i )
      {
        v5 = SmKmStoreReferenceEx((__int64)&SmGlobals, i);
        if ( v5 )
          SMKM_STORE_MGR<SM_TRAITS>::SmStoreContentsRundown((__int64)&SmGlobals, v5);
      }
    }
  }
}
