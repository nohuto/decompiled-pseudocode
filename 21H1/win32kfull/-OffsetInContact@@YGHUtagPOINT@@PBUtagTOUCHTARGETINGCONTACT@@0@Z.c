/*
 * XREFs of ?OffsetInContact@@YGHUtagPOINT@@PBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x179CD1
 * Callers:
 *     ?xxxWindowHitTestFromTargetingProperty@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTTESTARGS@@PAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x17B14E (-xxxWindowHitTestFromTargetingProperty@@YGPAUHWND__@@PAUtagWND@@UtagPOINT@@PAUtagPNTRWINDOWHITTT.c)
 * Callees:
 *     _TouchTargetingIntersectSegment@28 @ 0x1B8E4A (_TouchTargetingIntersectSegment@28.c)
 */

int __userpurge OffsetInContact@<eax>(
        int a1@<ecx>,
        struct tagPOINT a2,
        const struct tagTOUCHTARGETINGCONTACT *a3,
        struct tagPOINT a4)
{
  int v4; // esi
  char *v6; // ebx
  int v7; // edi
  char *v8; // [esp+8h] [ebp-14h] BYREF
  int v9; // [esp+Ch] [ebp-10h]
  char *v10; // [esp+10h] [ebp-Ch] BYREF
  int v11; // [esp+14h] [ebp-8h]
  int v12; // [esp+18h] [ebp-4h]

  v4 = 0;
  v12 = a1;
  v10 = 0;
  v11 = 0;
  v8 = 0;
  v9 = 0;
  if ( !__PAIR64__(a4.x, (unsigned int)a3) )
    return *(_DWORD *)(a1 + 176);
  v6 = (char *)a3 + a2.x;
  v7 = a2.y + a4.x;
  if ( TouchTargetingIntersectSegment(v12, &v10, &v8, a2.x, a2.y, (char *)a3 + a2.x, a2.y + a4.x)
    && (v10 == v6 && v11 == v7 || v8 == v6 && v9 == v7) )
  {
    return 1;
  }
  return v4;
}
