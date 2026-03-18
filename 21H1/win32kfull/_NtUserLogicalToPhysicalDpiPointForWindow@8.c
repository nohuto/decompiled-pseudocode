/*
 * XREFs of _NtUserLogicalToPhysicalDpiPointForWindow@8 @ 0x165FCA
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _LogicalToPhysicalInPlaceRectWithSubpixel@12 @ 0x9B5AE (_LogicalToPhysicalInPlaceRectWithSubpixel@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtUserLogicalToPhysicalDpiPointForWindow(int a1, int *a2)
{
  int v2; // esi
  int v3; // ecx
  int v4; // eax
  int v5; // edx
  int v6; // ecx
  int v8; // [esp+10h] [ebp-44h] BYREF
  int v9; // [esp+14h] [ebp-40h]
  int v10; // [esp+18h] [ebp-3Ch]
  int v11; // [esp+1Ch] [ebp-38h]
  int v12; // [esp+20h] [ebp-34h]
  int v13; // [esp+24h] [ebp-30h]
  int v14; // [esp+38h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+3Ch] [ebp-18h]

  v2 = 0;
  EnterSharedCrit(0, 1);
  v3 = ValidateHwnd(a1);
  if ( v3 )
  {
    v12 = 0;
    v13 = 0;
    ms_exc.registration.TryLevel = 0;
    if ( (unsigned int)a2 >= _MmUserProbeAddress )
      *(_DWORD *)_MmUserProbeAddress = 0;
    v4 = *a2;
    v5 = a2[1];
    *a2 = *a2;
    a2[1] = v5;
    v12 = v4;
    v13 = v5;
    ms_exc.registration.TryLevel = -2;
    v8 = v4;
    v9 = v5;
    v10 = v4;
    v11 = v5;
    v2 = LogicalToPhysicalInPlaceRectWithSubpixel(v3, &v8, 0);
    v14 = v2;
    if ( v2 == 1 )
    {
      v12 = v8;
      v6 = v9;
      v13 = v9;
      *a2 = v8;
      a2[1] = v6;
      v2 = 1;
      v14 = 1;
      ms_exc.registration.TryLevel = -2;
    }
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
