/*
 * XREFs of IommuGetConfiguration @ 0x140A70E20
 * Callers:
 *     <none>
 * Callees:
 *     IommupGetSystemContext @ 0x1403CC184 (IommupGetSystemContext.c)
 */

__int64 __fastcall IommuGetConfiguration(unsigned int a1, _DWORD *a2, unsigned int *a3, PVOID **a4)
{
  __int64 *v4; // r10
  unsigned int v6; // r11d
  PVOID *SystemContext; // rax
  __int64 *v9; // rbx

  v4 = (__int64 *)HalpIommuList;
  v6 = -1;
  while ( v4 != &HalpIommuList )
  {
    v9 = v4;
    v4 = (__int64 *)*v4;
    if ( (v9[57] & 0x20) != 0 && *((_DWORD *)v9 + 124) < v6 )
      v6 = *((_DWORD *)v9 + 124);
  }
  *a2 = HalpIommuCount;
  *a3 = v6;
  SystemContext = IommupGetSystemContext(a1);
  *a4 = SystemContext;
  return SystemContext == 0LL ? 0xC000009A : 0;
}
