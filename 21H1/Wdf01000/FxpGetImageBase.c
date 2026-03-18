/*
 * XREFs of FxpGetImageBase @ 0x1C0090B88
 * Callers:
 *     FxRegisterBugCheckCallback @ 0x1C00907FC (FxRegisterBugCheckCallback.c)
 * Callees:
 *     AuxKlibInitialize @ 0x1C00BE188 (AuxKlibInitialize.c)
 *     AuxKlibQueryModuleInformation @ 0x1C00BE1F8 (AuxKlibQueryModuleInformation.c)
 */

__int64 __fastcall FxpGetImageBase(_DRIVER_OBJECT *DriverObject, void **ImageBase, unsigned int *ImageSize)
{
  unsigned int *v3; // rdi
  char *DriverStart; // rbp
  unsigned int v7; // edx
  int v8; // ebx
  unsigned int v9; // esi
  unsigned int *PoolWithTag; // rax
  unsigned int v11; // edx
  int v12; // r8d
  unsigned int *v13; // rcx
  char *v14; // rdx
  unsigned int modulesSize; // [rsp+40h] [rbp+8h] BYREF

  modulesSize = 0;
  v3 = 0LL;
  if ( DriverObject && ImageBase && ImageSize )
  {
    DriverStart = (char *)DriverObject->DriverStart;
    v8 = AuxKlibInitialize();
    if ( v8 < 0 )
      return (unsigned int)v8;
    v8 = AuxKlibQueryModuleInformation(&modulesSize, v7, 0LL);
    if ( v8 < 0 || !modulesSize )
      return (unsigned int)v8;
    v9 = modulesSize / 0x110;
    PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, modulesSize, 0x33304C57u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    v8 = AuxKlibQueryModuleInformation(&modulesSize, v11, PoolWithTag);
    if ( v8 >= 0 )
    {
      v12 = 0;
      v13 = v3;
      if ( v9 )
      {
        while ( 1 )
        {
          v14 = *(char **)v13;
          if ( (unsigned __int64)DriverStart >= *(_QWORD *)v13 && DriverStart < &v14[v13[2]] )
            break;
          v13 += 68;
          if ( ++v12 >= v9 )
            goto LABEL_14;
        }
        *ImageBase = v14;
        v8 = 0;
        *ImageSize = v13[2];
      }
      else
      {
LABEL_14:
        v8 = -1073741275;
      }
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
  return (unsigned int)v8;
}
