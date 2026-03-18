/*
 * XREFs of ?DdcciGetCapabilitiesStringFromMonitor@CPhysicalMonitorHandle@@AAEJXZ @ 0x1CF23A
 * Callers:
 *     ?DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AAEJXZ @ 0x1CF5FC (-DdcciGetCapabilitiesStringInternal@CPhysicalMonitorHandle@@AAEJXZ.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z @ 0x1CF957 (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z @ 0x1CFA1C (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z.c)
 *     ?RtlStringCbCopyA@@YGJPADIPBD@Z @ 0x1CFE94 (-RtlStringCbCopyA@@YGJPADIPBD@Z.c)
 *     ?RtlULongAdd@@YGJKKPAK@Z @ 0x1CFF0E (-RtlULongAdd@@YGJKKPAK@Z.c)
 */

int __thiscall CPhysicalMonitorHandle::DdcciGetCapabilitiesStringFromMonitor(CPhysicalMonitorHandle *this)
{
  CPhysicalMonitorHandle *v1; // edi
  size_t v2; // ebx
  int v3; // esi
  unsigned __int8 v4; // al
  SIZE_T v5; // eax
  unsigned int v6; // kr00_4
  char *PoolWithTag; // ecx
  char *v8; // eax
  SIZE_T v9; // ebx
  PVOID v10; // eax
  void *v11; // eax
  unsigned int v13; // [esp+0h] [ebp-5Ch]
  unsigned int *v14; // [esp+4h] [ebp-58h]
  char *v15; // [esp+Ch] [ebp-50h]
  CPhysicalMonitorHandle *v16; // [esp+10h] [ebp-4Ch]
  size_t MaxCount; // [esp+14h] [ebp-48h]
  int v18; // [esp+18h] [ebp-44h] BYREF
  __int16 v19; // [esp+1Ch] [ebp-40h]
  CPhysicalMonitorHandle *v20; // [esp+20h] [ebp-3Ch]
  unsigned int v21; // [esp+24h] [ebp-38h] BYREF
  void *Src; // [esp+28h] [ebp-34h]
  unsigned int v23; // [esp+2Ch] [ebp-30h] BYREF
  _BYTE v24[36]; // [esp+30h] [ebp-2Ch] BYREF
  __int16 v25; // [esp+54h] [ebp-8h]

  v1 = this;
  v21 = 0;
  LOWORD(this) = 0;
  Src = 0;
  v2 = 0;
  v16 = v1;
  v20 = 0;
  v23 = 0;
  while ( 1 )
  {
    v18 = 15958865;
    HIBYTE(v18) = BYTE1(this);
    v19 = (unsigned __int8)this;
    v3 = CPhysicalMonitorHandle::DdcciSendDataToMonitorDevice(v1, (union _LARGE_INTEGER)-500000LL, &v18, 6u);
    if ( v3 < 0 )
      break;
    memset(v24, 0, sizeof(v24));
    v25 = 0;
    v1 = v16;
    v3 = CPhysicalMonitorHandle::DdcciReceiveDataFromMonitorDevice(v16, (union _LARGE_INTEGER)-500000LL, v24, 0x26u);
    if ( v3 < 0 )
      break;
    if ( (v24[1] & 0x7Fu) < 3 || (v4 = (v24[1] & 0x7F) - 3, v4 > 0x20u) )
    {
      v3 = -1071774331;
      break;
    }
    if ( (v24[1] & 0x7F) != 3 )
    {
      MaxCount = v4;
      v3 = RtlULongAdd((unsigned int)&v21, v13, v14);
      if ( v3 < 0 )
        break;
      if ( v23 > v21 )
      {
        v8 = (char *)Src;
      }
      else
      {
        if ( v23 )
        {
          v6 = v23;
          v5 = 2 * v23;
          v23 *= 2;
          if ( !is_mul_ok(2u, v6) )
          {
            v3 = -1073741675;
            break;
          }
          v3 = 0;
        }
        else
        {
          v5 = 2048;
          v23 = 2048;
        }
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v5, 0x63326947u);
        v15 = PoolWithTag;
        if ( !PoolWithTag )
        {
          v3 = -1073741801;
          break;
        }
        if ( Src )
        {
          memcpy(PoolWithTag, Src, v2);
          ExFreePoolWithTag(Src, 0x63326947u);
          PoolWithTag = v15;
        }
        v8 = PoolWithTag;
        Src = PoolWithTag;
      }
      memcpy(&v8[(_DWORD)v20], &v24[5], MaxCount);
      this = (CPhysicalMonitorHandle *)((char *)v20 + MaxCount);
      v2 = v21;
      v20 = this;
      if ( (unsigned int)this <= 0xFFE0 )
        continue;
    }
    if ( v2 )
    {
      if ( v23 > v2 )
      {
        v9 = v2 + 1;
        *((char *)Src + v9 - 1) = 0;
        OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&v23, (CPhysicalMonitorHandle *)((char *)v16 + 40));
        if ( !*((_DWORD *)v16 + 12) || !*((_DWORD *)v16 + 11) )
        {
          v10 = ExAllocatePoolWithTag(PagedPool, v9, 0x63326947u);
          *((_DWORD *)v16 + 11) = v10;
          if ( v10 )
          {
            v3 = RtlStringCbCopyA((size_t)Src, v13, (const char *)v14);
            if ( v3 >= 0 )
            {
              *((_DWORD *)v16 + 12) = v9;
            }
            else
            {
              v11 = (void *)*((_DWORD *)v16 + 11);
              if ( v11 )
                ExFreePoolWithTag(v11, 0x63326947u);
              *((_DWORD *)v16 + 11) = 0;
              *((_DWORD *)v16 + 12) = 0;
            }
          }
          else
          {
            v3 = -1073741801;
          }
        }
        OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&v23);
      }
      else
      {
        v3 = -1071774328;
      }
    }
    else
    {
      v3 = -1071774329;
    }
    break;
  }
  if ( Src )
    ExFreePoolWithTag(Src, 0x63326947u);
  return v3;
}
