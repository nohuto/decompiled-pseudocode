/*
 * XREFs of ?xxxSetSensorPresence@CLegacyRotationMgr@@UEAAXH@Z @ 0x1C01D24A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z @ 0x1C0056228 (-UpdateAutoRotationRegistrySetting@CLegacyRotationMgr@@AEAAJKPEBGK0@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1C01D2934 (_tlgWriteTransfer_EtwWriteTransfer.c)
 */

void __fastcall CLegacyRotationMgr::xxxSetSensorPresence(CLegacyRotationMgr *this, int a2)
{
  int v3; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v4; // [rsp+38h] [rbp-40h] BYREF
  int *v5; // [rsp+58h] [rbp-20h]
  int v6; // [rsp+60h] [rbp-18h]
  int v7; // [rsp+64h] [rbp-14h]

  if ( (int)CLegacyRotationMgr::UpdateAutoRotationRegistrySetting(
              this,
              a2,
              L"SensorPresent",
              0,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation") >= 0 )
  {
    dword_1C033661C = a2;
    if ( !dword_1C033663C )
      dword_1C033663C = a2 != 0;
    if ( (unsigned int)dword_1C032B3F8 > 5
      && (qword_1C032B408 & 0x400000000001LL) != 0
      && (qword_1C032B410 & 0x400000000001LL) == qword_1C032B410 )
    {
      v7 = 0;
      v5 = &v3;
      v3 = a2;
      v6 = 4;
      tlgWriteTransfer_EtwWriteTransfer((int)&dword_1C032B3F8, (int)&dword_1C02EF6A6, 0, 0, 3u, &v4);
    }
  }
}
