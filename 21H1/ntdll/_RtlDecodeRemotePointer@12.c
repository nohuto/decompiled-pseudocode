/*
 * XREFs of _RtlDecodeRemotePointer@12 @ 0x4B33A320
 * Callers:
 *     <none>
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 */

int __stdcall RtlDecodeRemotePointer(int a1, int a2, int *a3)
{
  int v3; // esi
  int InformationProcess; // eax
  int v6; // [esp+4h] [ebp-4h] BYREF

  v3 = 0;
  InformationProcess = ZwQueryInformationProcess(a1, 36, (int)&v6, 4, 0);
  if ( InformationProcess < 0 )
    return InformationProcess | 0x10000000;
  *a3 = v6 ^ __ROR4__(a2, 32 - (v6 & 0x1F));
  return v3;
}
