/*
 * XREFs of _NtUserSlicerControl@16 @ 0x16A720
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _MagSlicerControl@24 @ 0x13DD42 (_MagSlicerControl@24.c)
 */

int __stdcall NtUserSlicerControl(int a1, int a2, char *a3, unsigned int a4)
{
  char *v4; // ebx
  unsigned int *v5; // edi
  NTSTATUS v6; // esi
  int v7; // edx
  char *v8; // esi
  _BYTE *v9; // esi
  _DWORD *v10; // edi
  char *v11; // esi
  _DWORD *v12; // eax
  unsigned int *v13; // ecx
  unsigned int v14; // edx
  char *v15; // esi
  size_t v16; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  NTSTATUS v19; // eax
  int v20; // ebx
  struct _NT_TIB *v21; // eax
  int v23; // [esp-4h] [ebp-CCh]
  ULONG *v24; // [esp+0h] [ebp-C8h]
  unsigned int v25; // [esp+0h] [ebp-C8h]
  unsigned int *v26; // [esp+4h] [ebp-C4h]
  _BYTE v27[24]; // [esp+10h] [ebp-B8h] BYREF
  _BYTE v28[20]; // [esp+28h] [ebp-A0h] BYREF
  _BYTE v29[20]; // [esp+3Ch] [ebp-8Ch] BYREF
  char *v30; // [esp+58h] [ebp-70h]
  _DWORD *v31; // [esp+60h] [ebp-68h]
  int v32; // [esp+64h] [ebp-64h]
  int v33; // [esp+68h] [ebp-60h]
  _DWORD *v34; // [esp+6Ch] [ebp-5Ch]
  size_t v35; // [esp+70h] [ebp-58h]
  unsigned int v36; // [esp+74h] [ebp-54h] BYREF
  unsigned int *v37; // [esp+78h] [ebp-50h]
  void *Src; // [esp+7Ch] [ebp-4Ch]
  size_t MaxCount; // [esp+80h] [ebp-48h]
  NTSTATUS v40; // [esp+84h] [ebp-44h]
  _DWORD v41[10]; // [esp+88h] [ebp-40h] BYREF
  CPPEH_RECORD ms_exc; // [esp+B0h] [ebp-18h]

  v4 = a3;
  Src = 0;
  MaxCount = 0;
  v35 = 0;
  memset(v41, 0, 0x24u);
  v5 = 0;
  v37 = 0;
  v34 = 0;
  v36 = 0;
  EnterCrit(0, 1);
  v31 = (_DWORD *)ValidateHwnd(a1);
  if ( v31 && a2 < 5 )
  {
    ms_exc.registration.TryLevel = 0;
    if ( a2 < 0 )
    {
      v10 = Src;
    }
    else
    {
      if ( a2 <= 1 )
      {
        if ( a3 )
          goto LABEL_9;
        if ( a4 )
          goto LABEL_12;
        v10 = 0;
        Src = 0;
        v16 = 0;
        MaxCount = 0;
        v35 = 0;
        goto LABEL_49;
      }
      if ( a2 == 2 )
      {
        if ( !a3 )
          goto LABEL_9;
        if ( a4 < 0x10 )
          goto LABEL_12;
        if ( a3 + 16 < a3 || (unsigned int)(a3 + 16) > _MmUserProbeAddress )
          *(_BYTE *)_MmUserProbeAddress = 0;
        v41[0] = *(_DWORD *)a3;
        v41[1] = *((_DWORD *)a3 + 1);
        v41[2] = *((_DWORD *)a3 + 2);
        v41[3] = *((_DWORD *)a3 + 3);
        if ( v41[0] <= 6u )
        {
          if ( ULongLongToULong(20LL * v41[0], v24) < 0 || (ULongAdd(16, v36, (int *)&v36, v25, v26) & 0x80000000) != 0 )
          {
            v6 = -1073741811;
          }
          else
          {
            MaxCount = v36;
            v12 = (_DWORD *)Win32AllocPool(v36, 1735226197);
            Src = v12;
            if ( v12 )
            {
              v30 = a3;
              v13 = v12;
              v37 = v12;
              v34 = v12;
              *v12 = v41[0];
              v12[1] = v41[1];
              v12[2] = v41[2];
              v12[3] = v41[3];
              v14 = 0;
              v32 = 0;
              while ( v14 < *v13 )
              {
                v33 = 20 * v14;
                v15 = &a3[20 * v14 + 16];
                if ( v15 + 20 < v15 || (unsigned int)(v15 + 20) > _MmUserProbeAddress )
                  v15 = (char *)_MmUserProbeAddress;
                qmemcpy(v28, v15, sizeof(v28));
                qmemcpy(&v37[v33 / 4u + 4], v28, 0x14u);
                v32 = ++v14;
                v13 = v37;
              }
              v16 = MaxCount;
              v35 = MaxCount;
              v10 = Src;
              goto LABEL_49;
            }
            v6 = -1073741801;
          }
        }
        else
        {
          v6 = -1073741306;
        }
        v40 = v6;
        ms_exc.registration.TryLevel = -2;
        v5 = 0;
        goto LABEL_55;
      }
      if ( a2 == 3 )
      {
        if ( !a3 )
          goto LABEL_9;
        v7 = 24;
        MaxCount = 24;
        if ( a4 < 0x18 )
          goto LABEL_12;
        v11 = a3;
        if ( a3 + 24 < a3 || (unsigned int)(a3 + 24) > _MmUserProbeAddress )
          v11 = (char *)_MmUserProbeAddress;
        qmemcpy(v27, v11, sizeof(v27));
        v23 = 6;
        v9 = v27;
      }
      else
      {
        if ( !a3 )
        {
LABEL_9:
          v6 = -1073741811;
LABEL_10:
          v40 = v6;
          ms_exc.registration.TryLevel = -2;
          goto LABEL_55;
        }
        v7 = 20;
        MaxCount = 20;
        if ( a4 < 0x14 )
        {
LABEL_12:
          v6 = -1073741306;
          goto LABEL_10;
        }
        v8 = a3;
        if ( a3 + 20 < a3 || (unsigned int)(a3 + 20) > _MmUserProbeAddress )
          v8 = (char *)_MmUserProbeAddress;
        qmemcpy(v29, v8, sizeof(v29));
        v23 = 5;
        v9 = v29;
      }
      qmemcpy(v41, v9, 4 * v23);
      v10 = v41;
      Src = v41;
      v35 = v7;
    }
    v16 = MaxCount;
LABEL_49:
    ms_exc.registration.TryLevel = -2;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    v19 = MagSlicerControl(_gMagnContext, ThreadWin32Thread, v31, a2, (int)v10, v16);
    v6 = v19;
    if ( a2 == 4 && v19 >= 0 )
    {
      ms_exc.registration.TryLevel = 1;
      if ( (unsigned int)a3 >= _MmUserProbeAddress )
        v4 = (char *)_MmUserProbeAddress;
      memcpy(v4, v10, MaxCount);
      ms_exc.registration.TryLevel = -2;
    }
    v5 = v37;
LABEL_55:
    v20 = 1;
    if ( v6 >= 0 )
      goto LABEL_57;
    goto LABEL_56;
  }
  v6 = -1073741811;
LABEL_56:
  v20 = 0;
  v21 = (struct _NT_TIB *)RtlNtStatusToDosError(v6);
  UserSetLastError(v21);
LABEL_57:
  if ( v5 )
    Win32FreePool(v5);
  UserSessionSwitchLeaveCrit();
  return v20;
}
