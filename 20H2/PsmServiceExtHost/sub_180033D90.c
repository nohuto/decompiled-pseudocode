/*
 * XREFs of sub_180033D90 @ 0x180033D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_180033EAC @ 0x180033EAC (sub_180033EAC.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180033D90(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  int v6; // eax
  int v8; // [rsp+30h] [rbp-19h] BYREF
  _DWORD v9[3]; // [rsp+34h] [rbp-15h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v12; // [rsp+60h] [rbp+17h]
  int v13; // [rsp+68h] [rbp+1Fh]
  int v14; // [rsp+6Ch] [rbp+23h]
  _DWORD *v15; // [rsp+70h] [rbp+27h]
  __int64 v16; // [rsp+78h] [rbp+2Fh]
  int *v17; // [rsp+80h] [rbp+37h]
  __int64 v18; // [rsp+88h] [rbp+3Fh]

  v6 = sub_180033EAC(a2);
  if ( v6 )
    *a4 = 1;
  if ( (unsigned int)dword_1800B3218 > 5 )
  {
    v9[0] = v6;
    v18 = 4LL;
    v17 = &v8;
    v16 = 4LL;
    v15 = v9;
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_1800B3220;
    v8 = a3;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800B3220;
    v12 = &unk_1800A08F4;
    v14 = 1;
    UserData.Reserved = 2;
    v13 = 54;
    v9[1] = (unsigned int)&unk_1800A3945 - (unsigned int)&unk_18009A4C0;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  return 0LL;
}
