/*
 * XREFs of MiNodeFromFaultPacket @ 0x1403539D0
 * Callers:
 *     MiInPagePageTable @ 0x140353230 (MiInPagePageTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeFromFaultPacket(__int64 a1)
{
  __int64 v1; // rdx
  unsigned __int8 *v3; // rdx
  unsigned int v4; // eax
  int v5; // ecx

  v1 = *(_QWORD *)(a1 + 16);
  if ( (v1 & 1) != 0
    && (v3 = (unsigned __int8 *)(v1 & 0xFFFFFFFFFFFFFFFEuLL), v4 = *v3, (unsigned __int8)v4 <= 8u)
    && (v5 = 404, _bittest(&v5, v4)) )
  {
    return *((unsigned int *)v3 + 10);
  }
  else
  {
    return 0LL;
  }
}
