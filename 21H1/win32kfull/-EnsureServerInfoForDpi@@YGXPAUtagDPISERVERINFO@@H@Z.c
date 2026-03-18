/*
 * XREFs of ?EnsureServerInfoForDpi@@YGXPAUtagDPISERVERINFO@@H@Z @ 0x15501A
 * Callers:
 *     _GetDPIServerInfoForDpi@4 @ 0x91B76 (_GetDPIServerInfoForDpi@4.c)
 * Callees:
 *     _GreMarkDeletableFont@4 @ 0xDAFD8 (_GreMarkDeletableFont@4.c)
 *     _GreTextInitialized@0 @ 0xF72EC (_GreTextInitialized@0.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     _CreateScaledFont@28 @ 0x155260 (_CreateScaledFont@28.c)
 */

void __fastcall EnsureServerInfoForDpi(_DWORD *a1, INT a2)
{
  int v4; // edi
  int v5; // ecx
  int v6; // ecx
  struct HLFONT__ *v7; // edi
  struct HLFONT__ *v8; // edi
  _DWORD v9[25]; // [esp+10h] [ebp-68h] BYREF
  int v10; // [esp+74h] [ebp-4h]

  if ( !*a1 )
  {
    v4 = Get96DpiServerInfo();
    v10 = v4;
    if ( GreTextInitialized() )
    {
      memset(v9, 0, 0x5Cu);
      if ( CreateScaledFont(*(struct HLFONT__ **)(v4 + 8), v5, a2, (int)&v9[3], (int)&v9[4], 0) )
      {
        v7 = (struct HLFONT__ *)a1[2];
        a1[3] = v9[3];
        a1[4] = v9[4];
        a1[2] = v9[2];
        if ( v7 )
        {
          GreMarkDeletableFont(v7);
          GreDeleteObject(v7);
        }
        v4 = v10;
      }
      if ( CreateScaledFont(*(struct HLFONT__ **)(v4 + 20), v6, a2, (int)&v9[6], (int)&v9[7], (int)&v9[8]) )
      {
        v8 = (struct HLFONT__ *)a1[5];
        a1[6] = v9[6];
        a1[7] = v9[7];
        a1[5] = v9[5];
        if ( v8 )
        {
          GreMarkDeletableFont(v8);
          GreDeleteObject(v8);
        }
        v4 = v10;
      }
      *a1 = 1;
    }
    a1[1] = (a2 * *(_DWORD *)(v4 + 4) + 48) / 96;
  }
}
