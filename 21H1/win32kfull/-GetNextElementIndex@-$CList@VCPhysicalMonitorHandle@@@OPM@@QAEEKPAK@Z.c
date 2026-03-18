/*
 * XREFs of ?GetNextElementIndex@?$CList@VCPhysicalMonitorHandle@@@OPM@@QAEEKPAK@Z @ 0x1CFDDD
 * Callers:
 *     _MonitorAPIProcessTerminating@4 @ 0x9DC7E (_MonitorAPIProcessTerminating@4.c)
 * Callees:
 *     ?RtlULongAdd@@YGJKKPAK@Z @ 0x1CFF0E (-RtlULongAdd@@YGJKKPAK@Z.c)
 */

char __thiscall OPM::CList<CPhysicalMonitorHandle>::GetNextElementIndex(int *this, unsigned int a2, unsigned int *a3)
{
  unsigned int v4; // esi
  unsigned int v5; // eax
  int v6; // edi
  unsigned int v8; // [esp+0h] [ebp-8h]
  unsigned int v9; // [esp+0h] [ebp-8h]
  unsigned int *v10; // [esp+4h] [ebp-4h]
  unsigned int *v11; // [esp+4h] [ebp-4h]

  if ( RtlULongAdd((unsigned int)&a2, v8, v10) < 0 )
    return 0;
  v4 = this[2];
  v5 = a2;
  if ( a2 >= v4 )
    return 0;
  v6 = *this;
  while ( !*(_DWORD *)(v6 + 4 * v5) )
  {
    if ( RtlULongAdd((unsigned int)&a2, v9, v11) >= 0 )
    {
      v5 = a2;
      if ( a2 < v4 )
        continue;
    }
    return 0;
  }
  *a3 = v5;
  return 1;
}
