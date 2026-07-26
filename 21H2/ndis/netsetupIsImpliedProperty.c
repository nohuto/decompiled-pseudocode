/*
 * XREFs of netsetupIsImpliedProperty @ 0x1C0101E18
 * Callers:
 *     ?ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z @ 0x1C0100600 (-ReadUint64@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_K@Z.c)
 *     ?ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z @ 0x1C0100D80 (-ReadGuid@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAU_GUID@@@Z.c)
 *     ?ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@@Z @ 0x1C0100E44 (-ReadString@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$unique_ptr@UKString@Rtl@@U-$de.c)
 *     ?ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z @ 0x1C0101978 (-ReadUint32@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAI@Z.c)
 *     ?ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z @ 0x1C0101B60 (-ReadBoolean@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEA_N@Z.c)
 *     ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x1C012256C (-ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$KArray@V-$unique_ptr@UKSt.c)
 * Callees:
 *     <none>
 */

char __fastcall netsetupIsImpliedProperty(__int64 a1)
{
  _QWORD *v1; // rdx
  __int64 v3; // r8

  v1 = &unk_1C00C98D0;
  while ( 1 )
  {
    if ( *((_DWORD *)v1 + 4) == *(_DWORD *)(a1 + 16) )
    {
      v3 = *v1 - *(_QWORD *)a1;
      if ( *v1 == *(_QWORD *)a1 )
        v3 = v1[1] - *(_QWORD *)(a1 + 8);
      if ( !v3 )
        break;
    }
    v1 = (_QWORD *)((char *)v1 + 20);
    if ( v1 == (_QWORD *)&unk_1C00CA104 )
      return 0;
  }
  return 1;
}
