/*
 * XREFs of ?InitMapSharedSection@@YGJPAU_EPROCESS@@PAU_USERCONNECT@@@Z @ 0x1B10E
 * Callers:
 *     _NtUserProcessConnect@8 @ 0x1B300 (_NtUserProcessConnect@8.c)
 * Callees:
 *     _WPP_RECORDER_SF_@20 @ 0x1B668 (_WPP_RECORDER_SF_@20.c)
 *     _WPP_RECORDER_SF_q@24 @ 0x1B74E (_WPP_RECORDER_SF_q@24.c)
 */

int __fastcall InitMapSharedSection(int a1, _DWORD *a2)
{
  _DWORD *v2; // ebx
  int ProcessWin32Process; // eax
  int result; // eax
  int v6; // ebx
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // edx
  int v10; // eax
  int v11; // ebx
  int v12; // edi
  int v13; // ecx
  int v14; // [esp+Ch] [ebp-1Ch] BYREF
  int v15; // [esp+10h] [ebp-18h]
  int v16; // [esp+14h] [ebp-14h]
  _DWORD *v17; // [esp+18h] [ebp-10h]
  int v18; // [esp+1Ch] [ebp-Ch] BYREF
  int v19; // [esp+20h] [ebp-8h] BYREF
  int v20; // [esp+24h] [ebp-4h] BYREF

  v20 = 0;
  v19 = 0;
  v2 = a2;
  v17 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(3, 14, &WPP_5beb818f3182338190d7890059714f79_Traceguids);
  ProcessWin32Process = PsGetProcessWin32Process(a1);
  if ( ProcessWin32Process && *(_DWORD *)(ProcessWin32Process + 404) )
  {
    v20 = *(_DWORD *)(PsGetProcessWin32Process(a1) + 404);
    v8 = *(_DWORD *)(PsGetProcessWin32Process(a1) + 408);
    v19 = v8;
  }
  else
  {
    v18 = 0x100000;
    v14 = 0;
    v15 = 0;
    result = MmMapViewOfSection(_ghSectionShared, a1, &v20, 0, 0, &v14, &v18, 2, 0x400000, 2);
    if ( result < 0 )
      return result;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_q(3, 15, &WPP_5beb818f3182338190d7890059714f79_Traceguids, v20);
    v14 = 1052672;
    v18 = 0;
    v15 = 0;
    v6 = MmMapViewOfSection(_ghSectionShared, a1, &v19, 0, 0, &v14, &v18, 2, 0x400000, 2);
    if ( v6 < 0 )
    {
      MmUnmapViewOfSection(a1, v20);
      return v6;
    }
    v7 = PsGetProcessWin32Process(a1);
    v2 = v17;
    if ( v7 )
    {
      *(_DWORD *)(v7 + 404) = v20;
      *(_DWORD *)(v7 + 408) = v19;
    }
    v8 = v19;
  }
  v2[5] = v8;
  v2[1] = v8 + _gSharedInfo[0] - _gpvSharedAlloc;
  v2[2] = v20 + _gSharedInfo[1] - _gpvSharedBase;
  v2[3] = _gSharedInfo[2];
  v2[4] = v8 + _gSharedInfo[3] - _gpvSharedAlloc;
  v2[68] = _gSharedInfo[67];
  v2[69] = v8 + _gSharedInfo[68] - _gpvSharedAlloc;
  v2[70] = _gSharedInfo[69];
  v9 = v2 + 7;
  v2[71] = v8 + _gSharedInfo[70] - _gpvSharedAlloc;
  v17 = (_DWORD *)(-4 - (_DWORD)v2);
  v10 = -28 - (_DWORD)v2;
  v11 = -4 - (_DWORD)v2;
  v16 = v10;
  v12 = 31;
  do
  {
    *(v9 - 1) = *(_DWORD *)((char *)v9 + v10 + _gSharedInfo[0] + 20);
    v13 = *(_DWORD *)((char *)v9 + v11 + _gSharedInfo[0]);
    if ( v13 )
      v13 = v8 + v13 - _gpvSharedAlloc;
    v10 = v16;
    *v9 = v13;
    v9 += 2;
    --v12;
  }
  while ( v12 );
  return 0;
}
