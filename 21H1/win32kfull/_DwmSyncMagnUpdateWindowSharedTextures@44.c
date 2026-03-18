/*
 * XREFs of _DwmSyncMagnUpdateWindowSharedTextures@44 @ 0x1D2D8F
 * Callers:
 *     _MagGetLensContextInformation@28 @ 0x13CB12 (_MagGetLensContextInformation@28.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YGJJPAU_PORT_MESSAGE@@@Z @ 0xB4EC4 (-SyncLpcCheckNtStatus@@YGJJPAU_PORT_MESSAGE@@@Z.c)
 */

int __fastcall DwmSyncMagnUpdateWindowSharedTextures(
        void *a1,
        int a2,
        int a3,
        int a4,
        const void *a5,
        int a6,
        int a7,
        HANDLE Handle,
        PVOID Object,
        _DWORD *a10,
        _DWORD *a11)
{
  int v11; // edi
  PVOID v12; // ebx
  int v13; // eax
  _DWORD *v14; // esi
  int v15; // ecx
  int v16; // ecx
  int v17; // eax
  HANDLE v19; // [esp+0h] [ebp-7Ch]
  _WORD v20[3]; // [esp+10h] [ebp-6Ch] BYREF
  int v21; // [esp+16h] [ebp-66h]
  int v22; // [esp+1Ah] [ebp-62h]
  int v23; // [esp+1Eh] [ebp-5Eh]
  int v24; // [esp+22h] [ebp-5Ah]
  __int16 v25; // [esp+26h] [ebp-56h]
  int v26; // [esp+28h] [ebp-54h]
  HANDLE v27; // [esp+2Ch] [ebp-50h]
  _DWORD v28[10]; // [esp+30h] [ebp-4Ch] BYREF
  __int64 v29; // [esp+58h] [ebp-24h]
  int v30; // [esp+60h] [ebp-1Ch]
  int v31; // [esp+64h] [ebp-18h]
  int v32; // [esp+68h] [ebp-14h]
  PVOID v33; // [esp+6Ch] [ebp-10h]
  int v34; // [esp+70h] [ebp-Ch]
  PVOID v35; // [esp+74h] [ebp-8h]

  v34 = a2;
  v35 = a1;
  v11 = -1073741823;
  if ( a1 )
  {
    v11 = _gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( _gbInVideoPnpCallout )
    {
      v12 = a1;
    }
    else
    {
      v21 = 0;
      v22 = 0;
      v23 = 0;
      v24 = 0;
      v25 = 0;
      v20[0] = 72;
      v20[1] = 96;
      v20[2] = 0x8000;
      v27 = Handle;
      v33 = Object;
      v29 = a3;
      v30 = a4;
      v31 = a6;
      v26 = 1073741924;
      v32 = a7;
      qmemcpy(v28, a5, sizeof(v28));
      EtwUpdateEvent(0, 1073741924);
      v12 = v35;
      a3 = 96;
      v13 = LpcSendWaitReceivePort(v35, &loc_20000, v20, v20, &a3, 0);
      v11 = SyncLpcCheckNtStatus(v13, (int)v20);
      if ( v11 >= 0 )
      {
        v14 = a10;
        v15 = (int)v27;
        *a10 = v27;
        if ( v15 < 0 )
        {
          v14[1] = 0;
          v14[2] = 0;
        }
        else
        {
          v11 = 0;
          v16 = v28[0];
          v14[1] = v28[4];
          v14[3] = v28[5];
          v14[4] = v28[6];
          v17 = v28[7];
          v14[2] = v16;
          v14[5] = v17;
          if ( v16 )
          {
            v14[9] = v28[3];
            Handle = 0;
            if ( (int)ObDuplicateObject(v34, v28[1], 0, &Handle, 4, 512, 1, 0) >= 0 )
            {
              Object = 0;
              ObReferenceObjectByHandle(Handle, 4u, _MmSectionObjectType, 0, &Object, 0);
              v19 = Handle;
              v14[10] = Object;
              ZwClose(v19);
            }
          }
          else
          {
            v14[10] = 0;
            v14[9] = 0;
          }
          *a11 = v28[8];
        }
      }
    }
    ObfDereferenceObject(v12);
  }
  return v11;
}
