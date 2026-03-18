/*
 * XREFs of BiBindEfiBootManager @ 0x14096BB64
 * Callers:
 *     BiBindEfiNamespaceObjects @ 0x14096C000 (BiBindEfiNamespaceObjects.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     BcdOpenObject @ 0x14076F250 (BcdOpenObject.c)
 *     BcdCloseObject @ 0x14076F3DC (BcdCloseObject.c)
 *     BcdSetElementDataWithFlags @ 0x14076F7EC (BcdSetElementDataWithFlags.c)
 *     BiLogMessage @ 0x1407705AC (BiLogMessage.c)
 *     BcdCreateObject @ 0x14096A390 (BcdCreateObject.c)
 *     BcdDeleteObject @ 0x14096A428 (BcdDeleteObject.c)
 *     BiQueryBootEntryOrder @ 0x14096DFD4 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x14096E0AC (BiQueryBootOptions.c)
 *     BiTranslateBootEntryId @ 0x14096E32C (BiTranslateBootEntryId.c)
 *     BiTranslateBootOrder @ 0x14096E394 (BiTranslateBootOrder.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiBindEfiBootManager(__int64 a1, __int64 a2)
{
  void *v4; // r14
  int Object; // ebx
  PVOID PoolWithTag; // rax
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // r8
  unsigned int *v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  void *v14; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v15; // [rsp+38h] [rbp-48h] BYREF
  PVOID v16; // [rsp+40h] [rbp-40h] BYREF
  int v17; // [rsp+48h] [rbp-38h] BYREF
  _DWORD v18[2]; // [rsp+50h] [rbp-30h] BYREF
  PVOID P; // [rsp+58h] [rbp-28h] BYREF
  __int64 v20; // [rsp+60h] [rbp-20h] BYREF
  __int128 v21; // [rsp+68h] [rbp-18h] BYREF

  v17 = 0;
  v15 = 0;
  v20 = 0LL;
  v16 = 0LL;
  P = 0LL;
  v14 = 0LL;
  v4 = 0LL;
  v21 = 0LL;
  if ( (int)BcdOpenObject(a1, &GUID_FIRMWARE_BOOTMGR.Data1, &v14) >= 0 )
  {
    BcdDeleteObject(v14);
    v14 = 0LL;
  }
  v18[1] = 269484033;
  v18[0] = 1;
  Object = BcdCreateObject(a1, (int)&GUID_FIRMWARE_BOOTMGR, (int)v18, (__int64 *)&v14);
  if ( Object >= 0 )
  {
    Object = BiQueryBootEntryOrder(&v16, &v15);
    if ( Object >= 0 )
    {
      if ( v15 )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 16LL * v15, 0x4B444342u);
        v4 = PoolWithTag;
        if ( !PoolWithTag )
        {
          Object = -1073741670;
          goto LABEL_19;
        }
        BiTranslateBootOrder(a2, v16, PoolWithTag, &v15);
        if ( v15 )
        {
          Object = BcdSetElementDataWithFlags(v14, 0x24000001u, v7, (__int64)v4, 16 * v15);
          if ( Object < 0 )
            goto LABEL_19;
        }
      }
      v8 = BiQueryBootOptions(&P, &v17);
      v10 = (unsigned int *)P;
      Object = v8;
      if ( v8 >= 0 )
      {
        if ( *((_DWORD *)P + 2) == -1
          || (v20 = *((unsigned int *)P + 2),
              Object = BcdSetElementDataWithFlags(v14, 0x25000004u, v9, (__int64)&v20, 8u),
              Object >= 0) )
        {
          v11 = v10[4];
          if ( (_DWORD)v11 == -2
            || (int)BiTranslateBootEntryId(a2, v11, &v21) < 0
            || (Object = BcdSetElementDataWithFlags(v14, 0x24000002u, v12, (__int64)&v21, 0x10u), Object >= 0) )
          {
            Object = 0;
          }
        }
      }
      if ( v10 )
        ExFreePoolWithTag(v10, 0x4B444342u);
    }
LABEL_19:
    if ( v16 )
      ExFreePoolWithTag(v16, 0x4B444342u);
    if ( v4 )
      ExFreePoolWithTag(v4, 0x4B444342u);
  }
  if ( v14 )
  {
    if ( Object >= 0 )
      BcdCloseObject((__int64)v14);
    else
      BcdDeleteObject(v14);
  }
  if ( Object < 0 )
    BiLogMessage(4LL, L"BiBindEfiBootManager failed %x", (unsigned int)Object);
  return (unsigned int)Object;
}
