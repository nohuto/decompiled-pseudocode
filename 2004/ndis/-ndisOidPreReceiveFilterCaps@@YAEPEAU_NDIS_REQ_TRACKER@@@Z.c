/*
 * XREFs of ?ndisOidPreReceiveFilterCaps@@YAEPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0086EC0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qqq @ 0x1C000E1E0 (WPP_RECORDER_SF_qqq.c)
 *     WPP_RECORDER_SF_qqLd @ 0x1C001B610 (WPP_RECORDER_SF_qqLd.c)
 *     memmove @ 0x1C003FB80 (memmove.c)
 */

char __fastcall ndisOidPreReceiveFilterCaps(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r14
  int v2; // ebx
  __int64 v3; // rbp
  char v4; // di
  __int64 v5; // r12
  size_t v7; // r8
  unsigned __int16 *v8; // rdx
  unsigned int v9; // ecx
  unsigned int v10; // r15d
  __int64 v11; // rax
  char v13[4]; // [rsp+40h] [rbp-38h]

  v1 = *(_QWORD *)a1;
  v2 = 0;
  v3 = *((_QWORD *)a1 + 4);
  v4 = 0;
  v5 = *((_QWORD *)a1 + 3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xAu,
      (struct _GUID *)&WPP_8ae6292ee3d833c857d30dcfbd7b4f7f_Traceguids,
      v1,
      v5,
      v3);
  if ( (*(_DWORD *)(v3 + 4) & 0xFFFFFFFD) == 0 )
  {
    *((_DWORD *)a1 + 10) = 0;
    v7 = *(unsigned int *)(v3 + 48);
    if ( (unsigned int)v7 < 0x38 )
    {
      *(_DWORD *)(v3 + 56) = 56;
      v2 = -1073676268;
      v4 = 1;
      goto LABEL_21;
    }
    if ( !v1 )
      goto LABEL_22;
    if ( *(_DWORD *)(v3 + 32) == 66081 )
      v8 = *(unsigned __int16 **)(v1 + 3536);
    else
      v8 = *(unsigned __int16 **)(v1 + 3544);
    if ( v8 )
    {
      v9 = v8[1];
      if ( v8[1] >= 0x54u )
        v9 = 84;
      if ( v9 < (unsigned int)v7 )
        v7 = v9;
      v10 = v7;
      memmove(*(void **)(v3 + 40), v8, v7);
      v11 = *(_QWORD *)(v3 + 40);
      v4 = 1;
      if ( v10 < 0x54 )
      {
        if ( v10 >= 0x38 )
        {
          *(_BYTE *)(v11 + 1) = 1;
          *(_WORD *)(v11 + 2) = 56;
        }
      }
      else
      {
        *(_BYTE *)(v11 + 1) = 2;
        *(_WORD *)(v11 + 2) = 84;
      }
      *(_DWORD *)(v3 + 52) = v10;
      goto LABEL_21;
    }
  }
  v4 = 1;
  v2 = -1073741637;
LABEL_21:
  *((_DWORD *)a1 + 10) = v2;
LABEL_22:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v13 = v2;
    WPP_RECORDER_SF_qqLd(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0xBu,
      0xBu,
      (struct _GUID *)&WPP_8ae6292ee3d833c857d30dcfbd7b4f7f_Traceguids,
      v1,
      v5,
      v4,
      *(_DWORD *)v13);
  }
  return v4;
}
