/*
 * XREFs of _xxxImmProcessKey@20 @ 0xA2CE0
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _CheckImeHotKey@12 @ 0xA2E9A (_CheckImeHotKey@12.c)
 *     _GetAppImeCompatFlags@4 @ 0xA2FB2 (_GetAppImeCompatFlags@4.c)
 *     _ClientImmProcessKey@20 @ 0xA2FC8 (_ClientImmProcessKey@20.c)
 */

BOOL __fastcall xxxImmProcessKey(int a1, int a2, int a3, unsigned __int16 a4, int a5)
{
  _DWORD *v6; // ebx
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // ecx
  BOOL v11; // ecx
  int v12; // esi
  int v15; // [esp+18h] [ebp+8h]

  if ( a3 != 257 && a3 != 256 && a3 != 260 && a3 != 261 )
    return 0;
  v6 = *(_DWORD **)(*(_DWORD *)(a2 + 8) + 240);
  if ( !v6 )
    return 0;
  v7 = (unsigned __int8)a4;
  v8 = CheckImeHotKey(a5);
  if ( v8 )
  {
    v15 = *(_DWORD *)(v8 + 4);
    v10 = *(_DWORD *)(v8 + 16);
    v9 = v15;
  }
  else
  {
    v9 = -1;
    v10 = 0;
    v15 = -1;
  }
  if ( (unsigned int)(v9 - 256) <= 0x1F )
  {
    if ( v6[5] != v10 )
      _PostMessage(a2, 80, (gSystemFS & v6[8]) != 0, v10);
    return (GetAppImeCompatFlags(*(_DWORD *)(a2 + 8)) & 0x800000) == 0;
  }
  if ( (*_gpsi & 4) == 0 )
    return 0;
  if ( v15 == -1 )
  {
    if ( !v6[11]
      || !_HMObjectFromHandle(*(_DWORD *)(*(_DWORD *)(a2 + 20) + 132))
      || a5 < 0 && (*(_BYTE *)(v6[11] + 8) & 4) != 0 )
    {
      return 0;
    }
    v11 = (unsigned __int8)a4 == 245
       || (unsigned __int8)a4 == 246
       || (unsigned __int8)a4 == 242
       || (unsigned __int8)a4 == 241
       || (unsigned __int8)a4 == 250
       || (unsigned __int8)a4 == 251
       || (unsigned __int8)a4 == 247
       || (unsigned __int8)a4 == 248;
    if ( (a3 == 260 || a3 == 261) && (unsigned __int8)a4 != 18 && (unsigned __int8)a4 != 121 && !v11
      || (*(_BYTE *)(v6[11] + 8) & 8) == 0 && !v11 && ((unsigned __int8)a4 == 18 || (a5 & 0x20000000) != 0) )
    {
      return 0;
    }
  }
  if ( (unsigned __int8)a4 == 231 )
    v7 = a4 | (*(unsigned __int16 *)(_gptiCurrent + 486) << 16);
  v12 = ClientImmProcessKey(v7, a5, v15);
  if ( (GetAppImeCompatFlags(*(_DWORD *)(a2 + 8)) & 0x800000) != 0 )
    return v12 & 0xFFFFFFFE;
  return v12;
}
