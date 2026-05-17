/*
 * XREFs of _SetAssertBufferPtrinPeb@4 @ 0x4B33B4C3
 * Callers:
 *     _GetShipAssertBuffer@0 @ 0x4B33B3F0 (_GetShipAssertBuffer@0.c)
 * Callees:
 *     _ZwQueryInformationProcess@20 @ 0x4B2F2AF0 (_ZwQueryInformationProcess@20.c)
 */

int __thiscall SetAssertBufferPtrinPeb(void *this)
{
  int v2; // esi
  struct _PEB *v3; // eax
  struct _PEB *v5; // [esp+8h] [ebp-4h] BYREF

  v5 = 0;
  v2 = -1073741823;
  ZwQueryInformationProcess(-1, 26, (int)&v5, 4, 0);
  v3 = NtCurrentPeb();
  if ( v3 && (v5 == v3 || !v5) )
  {
    v3->WerShipAssertPtr = this;
    return 0;
  }
  return v2;
}
