/*
 * XREFs of ?AddComponent@CoreWindowProp@@SGJPAUtagWND@@0@Z @ 0xC42E8
 * Callers:
 *     ?xxxSetHost@CoreWindowProp@@SGJPAUtagWND@@0@Z @ 0xC4246 (-xxxSetHost@CoreWindowProp@@SGJPAUtagWND@@0@Z.c)
 * Callees:
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z @ 0x1C952 (--$GetProp@VCoreWindowProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCoreWindowProp@@@Z.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?xxxSetWindowBand@@YGHPAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z @ 0x9BDF2 (-xxxSetWindowBand@@YGHPAUtagWND@@0W4ZBID@@W4WindowBandOptions@@@Z.c)
 *     ?UpdateProcessPriorityWhenComponentAdded@PriorityBoostCUI@@YGXPAUtagWND@@0@Z @ 0xC437E (-UpdateProcessPriorityWhenComponentAdded@PriorityBoostCUI@@YGXPAUtagWND@@0@Z.c)
 *     ?FindComponent@CoreWindowProp@@KGPAUComponent@1@PAUtagWND@@0PAPAU21@@Z @ 0xC43C8 (-FindComponent@CoreWindowProp@@KGPAUComponent@1@PAUtagWND@@0PAPAU21@@Z.c)
 */

int __fastcall CoreWindowProp::AddComponent(int a1, int a2)
{
  int v3; // esi
  int v4; // edi
  _DWORD *v5; // ecx
  int v6; // edi
  struct tagWND *v8; // [esp+0h] [ebp-24h]
  PriorityBoostCUI *v9; // [esp+0h] [ebp-24h]
  struct CoreWindowProp::Component **v10; // [esp+4h] [ebp-20h]
  struct tagWND *v11; // [esp+4h] [ebp-20h]
  struct tagWND *v12; // [esp+8h] [ebp-1Ch]
  _DWORD v13[3]; // [esp+Ch] [ebp-18h] BYREF
  char v14[4]; // [esp+18h] [ebp-Ch] BYREF
  int v15; // [esp+1Ch] [ebp-8h]
  int v16; // [esp+20h] [ebp-4h] BYREF

  v3 = 0;
  v15 = a1;
  v16 = 0;
  if ( CWindowProp::GetProp<CoreWindowProp>(a1, &v16) )
  {
    v4 = v16;
    if ( *(_DWORD *)(v16 + 8) )
    {
      if ( !CoreWindowProp::FindComponent(0, v8, v10) )
      {
        v5 = (_DWORD *)Win32AllocPool(8, 1920430933);
        if ( !v5 )
          return -1073741801;
        *v5 = *(_DWORD *)(v4 + 20);
        v5[1] = a2;
        *(_DWORD *)(v4 + 20) = v5;
        ++*(_DWORD *)(v4 + 24);
      }
      v6 = v15;
      PriorityBoostCUI::UpdateProcessPriorityWhenComponentAdded(v9, v11, v12);
      if ( *(_DWORD *)(*(_DWORD *)(a2 + 20) + 148) != *(_DWORD *)(*(_DWORD *)(v15 + 20) + 148) )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v14);
        v13[2] = 0;
        v13[0] = *(_DWORD *)(_gptiCurrent + 228);
        *(_DWORD *)(_gptiCurrent + 228) = v13;
        v13[1] = a2;
        HMLockObject(a2);
        xxxSetWindowBand(a2, 0, *(_DWORD *)(*(_DWORD *)(v6 + 20) + 148), 7);
        ThreadUnlock1();
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v14);
      }
      return v3;
    }
  }
  UserSetLastError((struct _NT_TIB *)5);
  return -1073741790;
}
