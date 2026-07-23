/*
 * XREFs of IvtGetDomainId @ 0x1404E01D8
 * Callers:
 *     IvtAttachDeviceDomainInternal @ 0x1404DF808 (IvtAttachDeviceDomainInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtGetDomainId(__int64 a1, unsigned int a2)
{
  __int64 v2; // r11
  __int64 v3; // r9
  __int64 *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax

  v2 = *(_QWORD *)(a1 + 32);
  v3 = *(_QWORD *)(a1 + 184) & 0x1000000LL;
  if ( v3 )
    v5 = (__int64 *)(v2 + 8 * (2 * ((unsigned __int64)a2 >> 8) + ((unsigned __int8)((unsigned __int8)a2 >> 3) >= 0x10u)));
  else
    v5 = (__int64 *)(v2 + 16 * ((unsigned __int64)a2 >> 8));
  v6 = *v5;
  if ( v3 )
    v7 = *(_QWORD *)(32 * (a2 & 7 | (8LL * ((a2 >> 3) & 0xF))) + v6 + 8);
  else
    v7 = *(_QWORD *)(v6 + 16LL * (unsigned __int8)a2 + 8);
  return (unsigned __int16)((unsigned int)v7 >> 8);
}
