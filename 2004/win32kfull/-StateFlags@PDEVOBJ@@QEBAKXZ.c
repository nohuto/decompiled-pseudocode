/*
 * XREFs of ?StateFlags@PDEVOBJ@@QEBAKXZ @ 0x1C02775B8
 * Callers:
 *     DxgkEngDetectGDIPath @ 0x1C02783B0 (DxgkEngDetectGDIPath.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PDEVOBJ::StateFlags(PDEVOBJ *this)
{
  __int64 v1; // rdx

  v1 = *(_QWORD *)(*(_QWORD *)this + 2576LL);
  if ( ((v1 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
    return *(unsigned int *)(v1 + 160);
  else
    return 0LL;
}
