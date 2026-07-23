/*
 * XREFs of PiPnpRtlIsDeviceEnumerableForUser @ 0x140629384
 * Callers:
 *     PiPnpRtlApplyMandatoryDeviceFilters @ 0x140629228 (PiPnpRtlApplyMandatoryDeviceFilters.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PiAuVerifyAccessToObject @ 0x1405FF858 (PiAuVerifyAccessToObject.c)
 *     PnpGetObjectProperty @ 0x14062C84C (PnpGetObjectProperty.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiPnpRtlIsDeviceEnumerableForUser(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        struct _SECURITY_SUBJECT_CONTEXT *a4,
        BOOLEAN *a5)
{
  int ObjectProperty; // eax
  int v7; // ebx
  int v9; // [rsp+68h] [rbp+Fh] BYREF
  PVOID P; // [rsp+70h] [rbp+17h] BYREF
  GENERIC_MAPPING GenericMapping; // [rsp+78h] [rbp+1Fh] BYREF

  v9 = 0;
  P = 0LL;
  GenericMapping.GenericWrite = 0x20000;
  GenericMapping.GenericExecute = 0x20000;
  GenericMapping.GenericRead = 131073;
  GenericMapping.GenericAll = 983041;
  *a5 = 0;
  ObjectProperty = PnpGetObjectProperty(
                     0x47706E50u,
                     0x200uLL,
                     a3,
                     0LL,
                     (__int64)&DEVPKEY_Device_RestrictedSD,
                     (__int64)&v9,
                     (__int64)&P,
                     0LL,
                     0);
  v7 = ObjectProperty;
  if ( ObjectProperty == -1073741275 )
    goto LABEL_2;
  if ( ObjectProperty >= 0 )
  {
    if ( v9 != 19 )
      goto LABEL_3;
    v7 = PiAuVerifyAccessToObject(1u, P, &GenericMapping, a4, a5);
    if ( v7 < 0 )
    {
LABEL_2:
      v7 = 0;
LABEL_3:
      *a5 = 1;
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0x47706E50u);
  return (unsigned int)v7;
}
