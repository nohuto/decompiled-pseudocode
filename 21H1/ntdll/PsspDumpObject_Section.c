/*
 * XREFs of PsspDumpObject_Section @ 0x4B387FF0
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQuerySection@20 @ 0x4B2F2E90 (_ZwQuerySection@20.c)
 */

int __stdcall PsspDumpObject_Section(int a1, int a2, unsigned int a3, _DWORD *a4)
{
  *a4 = 0;
  if ( a3 >= 0x10 )
    return ZwQuerySection(a1, 0, a2, 16, (int)a4);
  else
    return -1073741789;
}
