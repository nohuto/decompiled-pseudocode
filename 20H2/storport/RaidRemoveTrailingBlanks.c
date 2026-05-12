/*
 * XREFs of RaidRemoveTrailingBlanks @ 0x1C000BF28
 * Callers:
 *     RaidAtaIdFormatString @ 0x1C0013A4C (RaidAtaIdFormatString.c)
 *     RaidBusEnumeratorVisitUnit @ 0x1C0016904 (RaidBusEnumeratorVisitUnit.c)
 *     RaGetUnitStorageDeviceProperty @ 0x1C0072664 (RaGetUnitStorageDeviceProperty.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidRemoveTrailingBlanks(__int64 a1, int a2)
{
  __int64 v3; // rax
  bool v4; // sf
  int v5; // edx
  _BYTE *v6; // rcx

  if ( a2 )
  {
    v3 = (unsigned int)(a2 - 1);
    v4 = a2 - 2 < 0;
    v5 = a2 - 2;
    *(_BYTE *)(v3 + a1) = 0;
    if ( !v4 )
    {
      v6 = (_BYTE *)(v5 + a1);
      do
      {
        if ( *v6 == 32 )
        {
          *v6 = 0;
        }
        else if ( *v6 )
        {
          break;
        }
        --v5;
        --v6;
      }
      while ( (__int64)&v6[-a1] >= 0 );
    }
    *(_BYTE *)(v5 + a1 + 1) = 0;
  }
}
