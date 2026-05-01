/*
 * XREFs of RmgrSrv_RmReleaseResources @ 0x1800031B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z @ 0x180003260 (-RmReleaseResources@ResourceManager@ExecutionModel@@QEAAJPEAUResourceHandle__@2@@Z.c)
 *     _tlgKeywordOn @ 0x180010200 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x18002DFD8 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x180044E00 (__security_check_cookie.c)
 */

__int64 __fastcall RmgrSrv_RmReleaseResources(ExecutionModel::ResourceManager *a1)
{
  unsigned int v2; // edi
  struct ExecutionModel::ResourceHandle__ *v4; // rax
  struct ExecutionModel::ResourceHandle__ *v5; // [rsp+30h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-38h] BYREF
  struct ExecutionModel::ResourceHandle__ **v7; // [rsp+58h] [rbp-18h]
  int v8; // [rsp+60h] [rbp-10h]
  int v9; // [rsp+64h] [rbp-Ch]

  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B31E0, 2LL) )
  {
    v4 = *(struct ExecutionModel::ResourceHandle__ **)a1;
    v9 = 0;
    v5 = v4;
    v8 = 8;
    v7 = &v5;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B31E0, (int)&dword_18009A882, 0, 0, 3u, &v6);
  }
  if ( a1 )
    v2 = ExecutionModel::ResourceManager::RmReleaseResources(a1, *(struct ExecutionModel::ResourceHandle__ **)a1);
  else
    v2 = -2147024882;
  if ( (unsigned int)dword_1800B31E0 > 4 && (unsigned __int8)tlgKeywordOn(&dword_1800B31E0, 2LL) )
  {
    v9 = 0;
    v7 = &v5;
    LODWORD(v5) = v2;
    v8 = 4;
    tlgWriteTransfer_EventWriteTransfer((int)&dword_1800B31E0, (int)&dword_18009A579, 0, 0, 3u, &v6);
  }
  if ( a1 )
    *(_QWORD *)a1 = 0LL;
  return v2;
}
