/*
 * XREFs of _UserGetHipDeviceInfo@4 @ 0x159610
 * Callers:
 *     <none>
 * Callees:
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 *     _GetMonitorRect@4 @ 0xB49BE (_GetMonitorRect@4.c)
 *     ?RtlStringCbCopyUnicodeString@@YGJPAGIPBU_UNICODE_STRING@@@Z @ 0x157CFD (-RtlStringCbCopyUnicodeString@@YGJPAGIPBU_UNICODE_STRING@@@Z.c)
 */

int __stdcall UserGetHipDeviceInfo(_DWORD *a1)
{
  int v1; // esi
  int v2; // edi
  struct DEVICEINFO *DeviceList; // eax
  _DWORD *v4; // ebx
  size_t v5; // edx
  int v6; // ecx
  unsigned int v7; // ecx
  int v8; // eax
  unsigned int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  void *v16; // ecx
  int v17; // eax
  _DWORD *MonitorRect; // eax
  _WORD *v19; // ecx
  _WORD *v20; // ecx
  unsigned int v22; // [esp+0h] [ebp-48h]
  unsigned int v23; // [esp+0h] [ebp-48h]
  const struct _UNICODE_STRING *v24; // [esp+4h] [ebp-44h]
  const unsigned __int16 *v25; // [esp+4h] [ebp-44h]
  unsigned int v26; // [esp+Ch] [ebp-3Ch]
  int v27; // [esp+10h] [ebp-38h]
  int v28; // [esp+14h] [ebp-34h]
  struct DEVICEINFO *v29; // [esp+18h] [ebp-30h]
  int v30; // [esp+1Ch] [ebp-2Ch]
  size_t v31; // [esp+20h] [ebp-28h]
  CInpPushLock *Lock; // [esp+24h] [ebp-24h]
  int v33; // [esp+2Ch] [ebp-1Ch]
  int v34; // [esp+30h] [ebp-18h]
  int v35; // [esp+34h] [ebp-14h]
  _DWORD v36[4]; // [esp+38h] [ebp-10h] BYREF

  v1 = 0;
  v2 = 0;
  v28 = 0;
  v30 = *a1 - 4;
  v26 = v30;
  UserEnterUserCritSec();
  Lock = CBaseInput::TmpGetLock(_gpHidInput);
  CInpPushLock::LockShared(Lock);
  DeviceList = CBaseInput::TmpGetDeviceList(_gpHidInput);
  v29 = DeviceList;
  if ( DeviceList )
  {
    v4 = a1 + 3;
    do
    {
      if ( *((char *)DeviceList + 120) < 0 )
      {
        v5 = *((_DWORD *)DeviceList + 71);
        v31 = v5;
        v6 = *(_DWORD *)(v5 + 8);
        v27 = v6;
        if ( v30 )
        {
          if ( v26 < 0x450 )
          {
            v1 = -1073741789;
            break;
          }
          *(v4 - 2) = *(_DWORD *)(v5 + 12);
          *(v4 - 1) = *(_DWORD *)(v6 + 1144);
          v7 = *v4 & 0xFFFFFFFD | (*(_DWORD *)(v5 + 316) != 0 ? 2 : 0);
          *v4 = v7;
          v8 = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(4 * BYTE1(*(_DWORD *)(v5 + 300)))) & 4;
          *v4 = v8;
          v9 = v8 & 0xFFFC03FF | (*(unsigned __int8 *)(v5 + 684) << 10);
          *v4 = v9;
          v10 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(8 * (*(int *)(v5 + 300) >> 2))) & 8;
          *v4 = v10;
          v11 = v10 ^ ((unsigned __int8)v10 ^ (unsigned __int8)(16 * (*(int *)(v5 + 300) >> 3))) & 0x10;
          *v4 = v11;
          v12 = v11 ^ ((unsigned __int8)v11 ^ (unsigned __int8)(32 * (*(int *)(v5 + 300) >> 4))) & 0x20;
          *v4 = v12;
          v13 = v12 ^ ((unsigned __int8)v12 ^ (unsigned __int8)((unsigned __int8)(*(int *)(v5 + 300) >> 5) << 6)) & 0x40;
          *v4 = v13;
          v14 = v13 ^ ((unsigned __int8)v13 ^ *(_DWORD *)(v5 + 300) & 0x80) & 0x80;
          *v4 = v14;
          v15 = v14 ^ ((unsigned __int16)v14 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v5 + 300) >> 9) << 8)) & 0x100;
          *v4 = v15;
          *v4 = v15 ^ ((unsigned __int16)v15 ^ (unsigned __int16)((unsigned __int16)(*(int *)(v5 + 300) >> 10) << 9)) & 0x200;
          v4[1] = *(_DWORD *)(v27 + 1912);
          v4[2] = *(_DWORD *)(v27 + 1896);
          v4[3] = *(_DWORD *)(v27 + 1900);
          v4[4] = *(_DWORD *)(v27 + 1904);
          v4[5] = *(_DWORD *)(v27 + 1908);
          v4[6] = *(_DWORD *)(v27 + 1696);
          v4[7] = *(_DWORD *)(v27 + 1700);
          v4[8] = *(_DWORD *)(v27 + 1708);
          v4[13] = *(_DWORD *)(v27 + 1788);
          v4[16] = *(_DWORD *)(v27 + 1888);
          v4[17] = *(_DWORD *)(v27 + 1892);
          v4[14] = *(_DWORD *)(v27 + 1880);
          v4[15] = *(_DWORD *)(v27 + 1884);
          RtlStringCchCopyW(128, (char *)v4 + 328, (unsigned __int16 *)(v27 + 1404), v22, &v24->Length);
          RtlStringCchCopyW(128, (char *)v4 + 584, (unsigned __int16 *)(v27 + 1148), v23, v25);
          if ( *(_DWORD *)(v27 + 1140) )
            v16 = (void *)ValidateHmonitorNoRip(*(_DWORD *)(v27 + 1140));
          else
            v16 = 0;
          v17 = *v4;
          if ( v16 )
          {
            *v4 = v17 | 1;
            MonitorRect = GetMonitorRect(v16, v36);
            v33 = MonitorRect[1];
            v34 = MonitorRect[2];
            v35 = MonitorRect[3];
            v4[9] = *MonitorRect;
            v4[10] = v33;
            v4[11] = v34;
            v4[12] = v35;
          }
          else
          {
            *v4 = v17 & 0xFFFFFFFE;
            v4[9] = 0;
            v4[10] = 0;
            v4[11] = 0;
            v4[12] = 0;
          }
          v19 = v4 + 18;
          v1 = 0;
          if ( *(_DWORD *)(v31 + 308) )
            RtlStringCbCopyUnicodeString(0x100u, v19, v31, 0, (unsigned __int16 *)(v31 + 304), v22, v24);
          else
            *v19 = 0;
          v20 = v4 + 210;
          if ( *(_DWORD *)(v31 + 308) )
            RtlStringCbCopyUnicodeString(0x100u, v20, v31, 0, (unsigned __int16 *)(v31 + 788), v22, v24);
          else
            *v20 = 0;
          v26 -= 1104;
          DeviceList = v29;
          v2 = v28;
        }
        ++v2;
        v4 += 276;
        v28 = v2;
      }
      DeviceList = (struct DEVICEINFO *)*((_DWORD *)DeviceList + 7);
      v29 = DeviceList;
    }
    while ( DeviceList );
  }
  CInpPushLock::UnLockShared(Lock);
  *a1 = 1104 * v2 + 4;
  UserLeaveUserCritSec();
  return v1;
}
