/*
 * XREFs of _NtUserGetIconInfo@24 @ 0x74F2A
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ?_InternalGetIconInfo@@YG_NPAUtagCURSOR@@PAU_ICONINFO@@PAU_UNICODE_STRING@@2PAK_N@Z @ 0x74C30 (-_InternalGetIconInfo@@YG_NPAUtagCURSOR@@PAU_ICONINFO@@PAU_UNICODE_STRING@@2PAK_N@Z.c)
 *     ?GetVirtualizedDpiCursor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x7528E (-GetVirtualizedDpiCursor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __stdcall NtUserGetIconInfo(int a1, ULONG a2, int *a3, int *a4, struct _UNICODE_STRING *a5, int a6)
{
  int IconInfo; // ebx
  int v7; // edx
  int *v9; // ecx
  int *v10; // ecx
  struct tagCURSOR *v11; // ecx
  struct _ICONINFO *v12; // ecx
  struct _UNICODE_STRING *v13; // ecx
  struct tagCURSOR *v14; // [esp+0h] [ebp-58h]
  unsigned int *v15; // [esp+0h] [ebp-58h]
  bool v16; // [esp+4h] [ebp-54h]
  _BYTE v17[8]; // [esp+10h] [ebp-48h] BYREF
  int v18; // [esp+18h] [ebp-40h] BYREF
  volatile void *v19; // [esp+1Ch] [ebp-3Ch]
  int v20; // [esp+20h] [ebp-38h] BYREF
  volatile void *v21; // [esp+24h] [ebp-34h]
  struct _ICONINFO *v22; // [esp+38h] [ebp-20h]
  struct tagCURSOR *v23; // [esp+3Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]
  struct tagCURSOR *VirtualizedDpiCursor; // [esp+60h] [ebp+8h]

  IconInfo = 0;
  v20 = 0;
  v21 = 0;
  v23 = 0;
  v18 = 0;
  v19 = 0;
  v22 = 0;
  EnterCrit(0, 1);
  _gbValidateHandleForIL = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v17);
  LOBYTE(v7) = 3;
  if ( HMValidateHandle(a1, v7) )
  {
    VirtualizedDpiCursor = GetVirtualizedDpiCursor(v14);
    ms_exc.registration.TryLevel = 0;
    if ( a3 )
    {
      v9 = a3;
      if ( (unsigned int)a3 >= _MmUserProbeAddress )
        v9 = (int *)_MmUserProbeAddress;
      v20 = *v9;
      v21 = (volatile void *)v9[1];
      ProbeForWrite(v21, HIWORD(v20), 1u);
      v23 = (struct tagCURSOR *)&v20;
    }
    else
    {
      v23 = 0;
    }
    if ( a4 )
    {
      v10 = a4;
      if ( (unsigned int)a4 >= _MmUserProbeAddress )
        v10 = (int *)_MmUserProbeAddress;
      v18 = *v10;
      v19 = (volatile void *)v10[1];
      ProbeForWrite(v19, HIWORD(v18), 1u);
      v22 = (struct _ICONINFO *)&v18;
    }
    else
    {
      v22 = 0;
    }
    if ( a5 )
    {
      v13 = a5;
      if ( (unsigned int)a5 >= _MmUserProbeAddress )
        v13 = (struct _UNICODE_STRING *)_MmUserProbeAddress;
      *(_DWORD *)&v13->Length = *(_DWORD *)&v13->Length;
    }
    if ( a2 >= _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    *(_BYTE *)a2 = *(_BYTE *)a2;
    *(_BYTE *)(a2 + 19) = *(_BYTE *)(a2 + 19);
    ms_exc.registration.TryLevel = -2;
    IconInfo = (unsigned __int8)_InternalGetIconInfo(
                                  (_DWORD *)a2,
                                  (int)VirtualizedDpiCursor,
                                  v23,
                                  v22,
                                  a5,
                                  (struct _UNICODE_STRING *)(a6 != 0),
                                  v15,
                                  v16);
    ms_exc.registration.TryLevel = 1;
    if ( a3 )
    {
      v11 = v23;
      *a3 = *(_DWORD *)v23;
      a3[1] = *((_DWORD *)v11 + 1);
    }
    if ( a4 )
    {
      v12 = v22;
      *a4 = *(_DWORD *)v22;
      a4[1] = *((_DWORD *)v12 + 1);
    }
    ms_exc.registration.TryLevel = -2;
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v17);
  UserSessionSwitchLeaveCrit();
  return IconInfo;
}
