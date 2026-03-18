/*
 * XREFs of ?iWndObjSetupExtEscape@@YGHAAVDCOBJ@@HHPAXH1@Z @ 0x1D84D0
 * Callers:
 *     ?GreExtEscapeInternal@@YGHAAVDCOBJ@@HHPADH1@Z @ 0x1D739B (-GreExtEscapeInternal@@YGHAAVDCOBJ@@HHPADH1@Z.c)
 * Callees:
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 *     ?fBlockExtEscape@@YGHAAVDCOBJ@@@Z @ 0x1D7C39 (-fBlockExtEscape@@YGHAAVDCOBJ@@@Z.c)
 *     ?vForceClientRgnUpdate@@YGXXZ @ 0x1E6558 (-vForceClientRgnUpdate@@YGXXZ.c)
 *     ?hdevFindDeviceHdev@@YGPAUHDEV__@@PAU1@U_RECTL@@PAVEWNDOBJ@@@Z @ 0x206441 (-hdevFindDeviceHdev@@YGPAUHDEV__@@PAU1@U_RECTL@@PAVEWNDOBJ@@@Z.c)
 */

int __userpurge iWndObjSetupExtEscape@<eax>(
        int a1@<edx>,
        struct XDCOBJ *a2@<ecx>,
        struct DCOBJ *a3,
        int a4,
        int a5,
        void *a6,
        int a7,
        void *a8)
{
  int v9; // ebx
  int v10; // edi
  int v12; // esi
  int v13; // edx
  HDEV DeviceHdev; // eax
  bool v15; // zf
  int v16; // ecx
  int v17; // esi
  int (__stdcall *v18)(int, int, struct DCOBJ *, int, int, void *); // eax
  int v19; // esi
  struct _RECTL v20; // [esp-Ch] [ebp-6Ch]
  struct EWNDOBJ *v21; // [esp+4h] [ebp-5Ch]
  _BYTE v22[20]; // [esp+10h] [ebp-50h] BYREF
  int v23; // [esp+24h] [ebp-3Ch]
  int v24; // [esp+28h] [ebp-38h]
  int v25; // [esp+2Ch] [ebp-34h]
  __int16 v26; // [esp+30h] [ebp-30h]
  HDEV v27; // [esp+40h] [ebp-20h]
  __int64 v28; // [esp+44h] [ebp-1Ch]
  LONG v29; // [esp+4Ch] [ebp-14h]
  struct XDCOBJ *v30; // [esp+50h] [ebp-10h]
  int v31; // [esp+54h] [ebp-Ch]
  int v32; // [esp+58h] [ebp-8h]
  HDEV v33; // [esp+5Ch] [ebp-4h]

  v9 = 0;
  v10 = a1;
  v30 = a2;
  v32 = a1;
  if ( *(_DWORD *)(*(_DWORD *)a2 + 504) )
  {
    UserEnterUserCritSec();
    v23 = 0;
    v24 = 0;
    v25 = 0;
    v26 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v22, a2, 0);
    if ( !fBlockExtEscape(a2) )
    {
      v12 = *(_DWORD *)a2;
      v13 = *(_DWORD *)(v12 + 504);
      DeviceHdev = *(HDEV *)(v12 + 36);
      v33 = DeviceHdev;
      v15 = ((unsigned int)&loc_20000 & (_DWORD)DeviceHdev[6]) == 0;
      v31 = v13 != 0 ? v13 + 16 : 0;
      v16 = v31;
      if ( !v15 )
      {
        v17 = v12 + 1064;
        v27 = *(HDEV *)v17;
        v17 += 4;
        LODWORD(v28) = *(_DWORD *)v17;
        v17 += 4;
        HIDWORD(v28) = *(_DWORD *)v17;
        v29 = *(_DWORD *)(v17 + 4);
        *(_QWORD *)&v20.left = v28;
        v20.right = v29;
        DeviceHdev = hdevFindDeviceHdev(v27, v20, v21);
        v16 = v31;
        if ( DeviceHdev )
        {
          if ( *(_DWORD *)(*(_DWORD *)v30 + 504) == *((_DWORD *)v33 + 455) )
            v16 = *((_DWORD *)DeviceHdev + 455) != 0 ? *((_DWORD *)DeviceHdev + 455) + 16 : 0;
          else
            v16 = v31;
        }
        else
        {
          DeviceHdev = v33;
        }
        v10 = v32;
      }
      v18 = (int (__stdcall *)(int, int, struct DCOBJ *, int, int, void *))*((_DWORD *)DeviceHdev + 499);
      if ( v18 )
      {
        v19 = v18(v16, v10, a3, a4, a5, a6);
        if ( gbWndobjUpdate )
        {
          gbWndobjUpdate = 0;
          vForceClientRgnUpdate();
        }
        v9 = v19;
      }
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v22);
    UserLeaveUserCritSec();
    return v9;
  }
  else
  {
    EngSetLastError(6u);
    return 0;
  }
}
