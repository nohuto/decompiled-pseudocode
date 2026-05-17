/*
 * XREFs of _RtlEncodeRemotePointer@12 @ 0x4B33A370
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 */

int __stdcall RtlEncodeRemotePointer(int a1, int a2, _DWORD *a3)
{
  int v3; // esi
  int InformationProcess; // eax
  int v6; // [esp+4h] [ebp-4h] BYREF

  v3 = 0;
  InformationProcess = ZwQueryInformationProcess(a1, 36, (int)&v6, 4, 0);
  if ( InformationProcess < 0 )
    return InformationProcess | 0x10000000;
  *a3 = __ROR4__(a2 ^ v6, v6 & 0x1F);
  return v3;
}
