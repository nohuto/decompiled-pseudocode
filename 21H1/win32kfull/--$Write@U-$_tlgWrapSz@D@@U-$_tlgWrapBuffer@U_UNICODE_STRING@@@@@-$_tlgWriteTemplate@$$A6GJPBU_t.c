/*
 * XREFs of ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@?$_tlgWriteTemplate@$$A6GJPBU_tlgProvider_t@@PBXPBU_GUID@@2IPAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YGJ0122I3@ZPBU2@PBU2@@@SGJPBU_tlgProvider_t@@PBXPBU_GUID@@2ABU?$_tlgWrapSz@D@@ABU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@@Z @ 0x1AD794
 * Callers:
 *     _RawInputThread@4 @ 0xD57F4 (_RawInputThread@4.c)
 *     ?OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1AE299 (-OnDeviceAttach@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1AE439 (-OnDeviceRemoval@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     __tlgWriteTransfer_EtwWriteTransfer@24 @ 0xE8E1E (__tlgWriteTransfer_EtwWriteTransfer@24.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

NTSTATUS __fastcall _tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapBuffer<_UNICODE_STRING>>(
        int a1,
        unsigned __int8 *a2,
        int a3,
        int a4,
        const char **a5,
        unsigned __int16 **a6)
{
  unsigned __int16 *v6; // eax
  int v8; // ecx
  char *v9; // edx
  int v10; // ecx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [esp+8h] [ebp-54h] BYREF
  char *v13; // [esp+28h] [ebp-34h]
  int v14; // [esp+2Ch] [ebp-30h]
  int v15; // [esp+30h] [ebp-2Ch]
  int v16; // [esp+34h] [ebp-28h]
  _DWORD *v17; // [esp+38h] [ebp-24h]
  int v18; // [esp+3Ch] [ebp-20h]
  int v19; // [esp+40h] [ebp-1Ch]
  int v20; // [esp+44h] [ebp-18h]
  int v21; // [esp+48h] [ebp-14h]
  int v22; // [esp+4Ch] [ebp-10h]
  _DWORD v23[2]; // [esp+50h] [ebp-Ch] BYREF

  v19 = 2;
  v17 = v23;
  v18 = 0;
  v6 = *a6;
  v20 = 0;
  v8 = *v6;
  v21 = *((_DWORD *)v6 + 1);
  v23[0] = v8;
  v22 = 0;
  v23[1] = 0;
  v9 = (char *)*a5;
  if ( *a5 )
  {
    v10 = &(*a5)[strlen(*a5) + 1] - v9;
  }
  else
  {
    v9 = byte_FC858;
    v10 = 1;
  }
  v13 = v9;
  v14 = 0;
  v15 = v10;
  v16 = 0;
  return _tlgWriteTransfer_EtwWriteTransfer((int)&dword_2662F8, a2, 0, 0, 5u, &UserData);
}
