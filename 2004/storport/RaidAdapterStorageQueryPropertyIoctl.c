/*
 * XREFs of RaidAdapterStorageQueryPropertyIoctl @ 0x1C00714A8
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C000C838 (RaidAdapterDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009F40 (RaidCompleteRequestEx.c)
 *     RaidGetStorageAdapterPhysicalTopologyProperty @ 0x1C000D650 (RaidGetStorageAdapterPhysicalTopologyProperty.c)
 *     RaidGetStorageAdapterCryptoProperty @ 0x1C0030154 (RaidGetStorageAdapterCryptoProperty.c)
 *     RaidGetStorageAdapterProtocolSpecificProperty @ 0x1C0030248 (RaidGetStorageAdapterProtocolSpecificProperty.c)
 *     RaidGetStorageAdapterRpmbProperty @ 0x1C00303F0 (RaidGetStorageAdapterRpmbProperty.c)
 *     RaidGetStorageAdapterTemperatureProperty @ 0x1C003044C (RaidGetStorageAdapterTemperatureProperty.c)
 *     RaidGetStorageAdapterProperty @ 0x1C00715B4 (RaidGetStorageAdapterProperty.c)
 *     RaidGetStorageAdapterSerialNumberProperty @ 0x1C0074934 (RaidGetStorageAdapterSerialNumberProperty.c)
 *     RaidGetStorageMiniportProperty @ 0x1C00749D4 (RaidGetStorageMiniportProperty.c)
 */

__int64 __fastcall RaidAdapterStorageQueryPropertyIoctl(_DWORD *a1, IRP *a2)
{
  int StorageAdapterSerialNumberProperty; // edx
  _IRP *MasterIrp; // r10
  unsigned __int64 v5; // r8
  __int64 v6; // r9
  unsigned int v7; // r8d
  int v9; // r9d
  int v10; // r8d
  int StorageAdapterPhysicalTopologyProperty; // eax
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  size_t Length; // [rsp+38h] [rbp+18h] BYREF

  StorageAdapterSerialNumberProperty = -1073741811;
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  Length = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
  if ( Length >= 8 )
  {
    v5 = *(int *)&MasterIrp->Type;
    if ( (unsigned int)v5 <= 0x39 )
    {
      v6 = 0x22A000000030022LL;
      if ( _bittest64(&v6, v5) )
      {
        v9 = *(_DWORD *)(&MasterIrp->Size + 1);
        if ( v9 )
        {
          if ( v9 == 1 )
          {
            StorageAdapterSerialNumberProperty = 0;
          }
          else
          {
            a2->IoStatus.Information = 0LL;
            StorageAdapterSerialNumberProperty = -1073741808;
          }
        }
        else
        {
          v10 = v5 - 1;
          if ( v10 )
          {
            v12 = v10 - 4;
            if ( v12 )
            {
              v13 = v12 - 11;
              if ( v13 )
              {
                v14 = v13 - 1;
                if ( v14 )
                {
                  v15 = v14 - 32;
                  if ( v15 )
                  {
                    v16 = v15 - 2;
                    if ( v16 )
                    {
                      v17 = v16 - 2;
                      if ( v17 )
                      {
                        if ( v17 == 4 )
                        {
                          StorageAdapterSerialNumberProperty = RaidGetStorageAdapterSerialNumberProperty(
                                                                 a1,
                                                                 MasterIrp,
                                                                 &Length);
                          a2->IoStatus.Information = Length;
                        }
                        goto LABEL_10;
                      }
                      StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterPhysicalTopologyProperty(
                                                                 (__int64)a1,
                                                                 a2,
                                                                 &Length);
                    }
                    else
                    {
                      StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterTemperatureProperty(
                                                                 (__int64)a1,
                                                                 a2,
                                                                 &Length);
                    }
                  }
                  else
                  {
                    StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterProtocolSpecificProperty(
                                                               (__int64)a1,
                                                               a2,
                                                               &Length);
                  }
                }
                else
                {
                  StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterCryptoProperty(
                                                             (__int64)a1,
                                                             (__int64)a2,
                                                             &Length);
                }
              }
              else
              {
                StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterRpmbProperty(a1, (__int64)a2, &Length);
              }
            }
            else
            {
              StorageAdapterPhysicalTopologyProperty = RaidGetStorageMiniportProperty(a1, MasterIrp, &Length);
            }
          }
          else
          {
            StorageAdapterPhysicalTopologyProperty = RaidGetStorageAdapterProperty(a1, MasterIrp, &Length);
          }
          StorageAdapterSerialNumberProperty = StorageAdapterPhysicalTopologyProperty;
          a2->IoStatus.Information = Length;
        }
LABEL_10:
        v7 = StorageAdapterSerialNumberProperty;
        return RaidCompleteRequestEx(a2, 0, v7);
      }
    }
  }
  a2->IoStatus.Information = 0LL;
  v7 = -1073741808;
  return RaidCompleteRequestEx(a2, 0, v7);
}
