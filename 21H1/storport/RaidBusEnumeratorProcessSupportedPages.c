/*
 * XREFs of RaidBusEnumeratorProcessSupportedPages @ 0x1C0011E40
 * Callers:
 *     <none>
 * Callees:
 *     RaidSrbStatusToNtStatus @ 0x1C000C0D0 (RaidSrbStatusToNtStatus.c)
 */

__int64 __fastcall RaidBusEnumeratorProcessSupportedPages(__int64 a1, __int64 a2, __int64 a3, _BYTE *a4)
{
  __int64 v4; // r9
  __int64 i; // rdx
  __int64 v7; // rax

  *a4 = 0;
  if ( (*(_BYTE *)(a2 + 3) & 0x3F) != 1 )
    return RaidSrbStatusToNtStatus(*(_BYTE *)(a2 + 3));
  v4 = *(_QWORD *)(a1 + 40);
  for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(v4 + 3); i = (unsigned int)(i + 1) )
  {
    switch ( *(unsigned __int8 *)(i + v4 + 4) )
    {
      case 0x80u:
        *(_BYTE *)a3 |= 2u;
        break;
      case 0x83u:
        *(_BYTE *)a3 |= 1u;
        break;
      case 0x89u:
        *(_BYTE *)a3 |= 4u;
        v7 = *(_QWORD *)(a3 + 8);
        if ( v7 )
          *(_BYTE *)(v7 + 450) |= 0x10u;
        break;
      case 0xB1u:
        *(_BYTE *)a3 |= 8u;
        break;
      case 0xB6u:
        *(_BYTE *)a3 |= 0x10u;
        break;
    }
  }
  return 0LL;
}
