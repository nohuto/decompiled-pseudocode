/*
 * XREFs of ??0CSpatialProperties@@QEAA@XZ @ 0x18005B980
 * Callers:
 *     ??0CEndpointCharacteristics@@QEAA@XZ @ 0x18005B5F4 (--0CEndpointCharacteristics@@QEAA@XZ.c)
 * Callees:
 *     GetSpatialSettingsMonitoringPKey @ 0x18005BAD4 (GetSpatialSettingsMonitoringPKey.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 */

CSpatialProperties *__fastcall CSpatialProperties::CSpatialProperties(CSpatialProperties *this)
{
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this, 0, 0);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_BYTE *)this + 76) = 0;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_BYTE *)this + 6852) = 0;
  *((_QWORD *)this + 859) = 0LL;
  *(GUID *)((char *)this + 6856) = GUID_00000000_0000_0000_0000_000000000000;
  memset_0((char *)this + 104, 0, 0x48uLL);
  memset_0((char *)this + 180, 0, 0x1A10uLL);
  *((_OWORD *)this + 430) = 0LL;
  *((_OWORD *)this + 431) = 0LL;
  *((_QWORD *)this + 864) = 0LL;
  GetSpatialSettingsMonitoringPKey((char *)this + 84);
  return this;
}
