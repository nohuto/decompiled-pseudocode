/*
 * XREFs of ?WritePointerDeviceCfgSetting@@YGJPAXPBGIPAEI@Z @ 0x16FA59
 * Callers:
 *     ?SetFlickMap@@YGHPAUtagFLICK_MAP@@H@Z @ 0x16F93D (-SetFlickMap@@YGHPAUtagFLICK_MAP@@H@Z.c)
 *     ?WritePredictionSettings@@YGHPAUtagDEVICECONFIG_SETTING@@KPBGK@Z @ 0x16FA91 (-WritePredictionSettings@@YGHPAUtagDEVICECONFIG_SETTING@@KPBGK@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __userpurge WritePointerDeviceCfgSetting@<eax>(
        const WCHAR *a1@<edx>,
        void *a2@<ecx>,
        ULONG Type,
        PVOID Data,
        ULONG DataSize,
        unsigned __int8 *a6,
        unsigned int a7)
{
  struct _UNICODE_STRING DestinationString; // [esp+4h] [ebp-8h] BYREF

  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  RtlInitUnicodeString(&DestinationString, a1);
  return ZwSetValueKey(a2, &DestinationString, 0, Type, Data, DataSize);
}
