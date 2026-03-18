/*
 * XREFs of _SpbCheckDce@4 @ 0x3272A
 * Callers:
 *     _zzzLockDisplayAreaAndInvalidateDCCache@12 @ 0x3536C (_zzzLockDisplayAreaAndInvalidateDCCache@12.c)
 *     _RevalidateDCE@4 @ 0x83C68 (_RevalidateDCE@4.c)
 *     _SpbCheck@0 @ 0x17E6A2 (_SpbCheck@0.c)
 * Callees:
 *     _IntersectRect@12 @ 0x36374 (_IntersectRect@12.c)
 *     _GetStyleWindow@8 @ 0x387E8 (_GetStyleWindow@8.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _SpbCheckRect@12 @ 0x17E755 (_SpbCheckRect@12.c)
 */

int __stdcall SpbCheckDce(_DWORD *a1)
{
  int result; // eax
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // ebx
  int StyleWindow; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // esi
  int v14; // [esp+10h] [ebp-18h]
  int v15; // [esp+14h] [ebp-14h] BYREF
  int v16; // [esp+18h] [ebp-10h]
  int v17; // [esp+1Ch] [ebp-Ch]
  int v18; // [esp+20h] [ebp-8h]

  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  result = GreGetBounds(a1[1], &v15, 0);
  if ( result )
  {
    v2 = a1[11];
    if ( !v2 || (v3 = a1[8], (v3 & 0x4000) != 0) || v3 < 0 )
    {
      v8 = v17;
      v7 = v15;
    }
    else
    {
      v4 = *(_DWORD *)(v2 + 20);
      v5 = *(_DWORD *)(v4 + 20);
      v6 = *(_DWORD *)(v4 + 16);
      v7 = v6 + v15;
      v18 += v5;
      v8 = v6 + v17;
      v16 += v5;
      v15 += v6;
      v17 += v6;
    }
    v14 = a1[8];
    if ( (v14 & 0x4000) != 0 )
    {
      StyleWindow = GetStyleWindow(a1[2], 2848);
      if ( StyleWindow )
      {
        v10 = *(_DWORD *)(StyleWindow + 20);
        v11 = *(_DWORD *)(v10 + 56);
        v12 = *(_DWORD *)(v10 + 52);
        v18 += v11;
        v16 += v11;
        v15 = v12 + v7;
        v17 = v12 + v8;
      }
    }
    v13 = a1[2];
    result = IntersectRect(*(_DWORD *)(v13 + 20) + 52);
    if ( result )
      return SpbCheckRect(v13, &v15, v14);
  }
  return result;
}
