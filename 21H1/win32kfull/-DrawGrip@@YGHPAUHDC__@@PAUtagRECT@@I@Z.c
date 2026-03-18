/*
 * XREFs of ?DrawGrip@@YGHPAUHDC__@@PAUtagRECT@@I@Z @ 0x8FDEE
 * Callers:
 *     _DrawFrameControl@16 @ 0x901FE (_DrawFrameControl@16.c)
 * Callees:
 *     _GrePolyPatBlt@20 @ 0x722C4 (_GrePolyPatBlt@20.c)
 *     _GreExtTextOutWInternal@40 @ 0x78958 (_GreExtTextOutWInternal@40.c)
 *     _GreSetTextColor@8 @ 0x90E92 (_GreSetTextColor@8.c)
 */

int __userpurge DrawGrip@<eax>(int *a1@<edx>, HDC a2@<ecx>, HDC a3, struct tagRECT *a4, unsigned int a5)
{
  int v5; // ebx
  int v6; // esi
  int v7; // eax
  int v8; // edi
  int v9; // edx
  int v10; // eax
  ERECTL *v11; // edi
  struct XDCOBJ *v12; // ebx
  int v13; // eax
  unsigned __int16 *v14; // esi
  unsigned __int16 *v15; // eax
  _DWORD v17[5]; // [esp+10h] [ebp-2Ch] BYREF
  int v18; // [esp+24h] [ebp-18h]
  int v19; // [esp+28h] [ebp-14h]
  int v20; // [esp+2Ch] [ebp-10h]
  int v21; // [esp+30h] [ebp-Ch]
  int v22; // [esp+34h] [ebp-8h]
  HDC v23; // [esp+38h] [ebp-4h]

  v5 = a1[3];
  v18 = a1[1];
  v6 = v5 - v18;
  v23 = a2;
  v7 = *a1;
  v8 = a1[2];
  v9 = v8 - *a1;
  v19 = v7;
  v10 = v9;
  if ( v9 >= v5 - v18 )
    v10 = v5 - v18;
  v11 = (ERECTL *)(v8 - v10);
  v12 = (struct XDCOBJ *)(v5 - v10);
  if ( ((unsigned __int16)a3 & 0xC000) != 0 )
  {
    v13 = *(_DWORD *)(_gpsi + 4192);
    v22 = *(_DWORD *)(_gpsi + 4312);
    v21 = v13;
  }
  else
  {
    v22 = *(_DWORD *)(_gpsi + 4352);
    v13 = *(_DWORD *)(_gpsi + 4232);
    v21 = *(_DWORD *)(_gpsi + 4248);
  }
  v20 = v13;
  v17[0] = v19;
  v17[1] = v18;
  v17[4] = v22;
  v17[2] = v9;
  v17[3] = v6;
  GrePolyPatBlt(v23, 0xF00021u, (struct XDCOBJ *)v17, 1u, (int)v23);
  v18 = GreSetTextColor(v23);
  if ( ((unsigned __int8)a3 & 0x10) != 0 )
  {
    v14 = L"y";
    v15 = L"x";
  }
  else
  {
    v14 = L"p";
    v15 = L"o";
  }
  GreExtTextOutWInternal(v23, v11, v12, 0, 0, v15, (struct tagRECT *)1, 0, 0, 0);
  GreSetTextColor(v23);
  GreExtTextOutWInternal(v23, v11, v12, 0, 0, v14, (struct tagRECT *)1, 0, 0, 0);
  GreSetTextColor(v23);
  return 1;
}
