/*
 * XREFs of _TouchTargetingClipContact@28 @ 0x1B8A8D
 * Callers:
 *     ?ClipContact@@YGXPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@HPBUtagRECT@@@Z @ 0x179AD7 (-ClipContact@@YGXPAUtagWND@@PAUtagTOUCHTARGETINGCONTACT@@HPBUtagRECT@@@Z.c)
 * Callees:
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?_TTClip@@YGXPAUtagTOUCHTARGETINGCONTACT@@JW4tagCLIP_SIDE@@@Z @ 0x1B85B8 (-_TTClip@@YGXPAUtagTOUCHTARGETINGCONTACT@@JW4tagCLIP_SIDE@@@Z.c)
 */

int __fastcall TouchTargetingClipContact(int *a1, int a2, int *a3, int a4, int a5, int a6, int a7)
{
  bool v8; // zf
  int result; // eax
  int v10; // edx
  int v11; // eax
  int v12; // esi
  int v13; // ecx
  int v14; // edi
  int v15; // edi
  int v16; // esi
  int v17; // eax
  int v18; // ecx
  int v19; // edx
  int v20; // [esp+Ch] [ebp-38h]
  int v21; // [esp+10h] [ebp-34h] BYREF
  int v22; // [esp+14h] [ebp-30h]
  int v23; // [esp+18h] [ebp-2Ch]
  int v24; // [esp+1Ch] [ebp-28h]
  int v25; // [esp+20h] [ebp-24h]
  int v26; // [esp+24h] [ebp-20h]
  int v27[5]; // [esp+28h] [ebp-1Ch] BYREF

  v27[0] = a4;
  v8 = a1[44] == 0;
  v27[1] = a5;
  v27[2] = a6;
  v27[3] = a7;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  result = !v8 && !a2;
  v8 = a1[45] == 0;
  a1[44] = result;
  if ( !v8 && (!a3 || (result = IntersectRect(v27, v27, a3)) != 0) )
  {
    result = IntersectRect(&v21, v27, a1);
    if ( result )
    {
      v10 = a1[3];
      v11 = v10 - a1[1];
      v12 = a1[2];
      v25 = a1[1];
      v13 = *a1;
      v14 = v23 - *a1;
      v26 = v12;
      v15 = v11 * v14;
      v16 = v11 * (v12 - v21);
      v17 = v26 - v13;
      v20 = v10;
      v18 = (v26 - v13) * (v24 - v25);
      v19 = v17 * (v10 - v22);
      if ( v15 > v16 || v15 > v18 || v15 > v19 )
      {
        if ( v16 > v18 || v16 > v19 )
        {
          if ( v18 > v19 )
            return _TTClip(a1, v22, 3);
          else
            return _TTClip(a1, v24, 2);
        }
        else
        {
          return _TTClip(a1, v21, 1);
        }
      }
      else
      {
        result = v23;
        *a1 = v23;
        if ( result >= v26 || (result = v25, v25 >= v20) )
          a1[45] = 0;
      }
    }
  }
  return result;
}
