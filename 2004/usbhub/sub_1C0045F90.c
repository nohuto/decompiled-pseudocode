/*
 * XREFs of sub_1C0045F90 @ 0x1C0045F90
 * Callers:
 *     sub_1C0057020 @ 0x1C0057020 (sub_1C0057020.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 *     sub_1C0044834 @ 0x1C0044834 (sub_1C0044834.c)
 *     sub_1C0044BA0 @ 0x1C0044BA0 (sub_1C0044BA0.c)
 */

__int64 __fastcall sub_1C0045F90(__int64 a1, struct _DEVICE_OBJECT *a2)
{
  __int128 **v2; // rbx
  int v4; // eax
  int v5; // eax
  unsigned __int32 i; // r15d
  __m128 *PoolWithTag; // rax
  char *v8; // rdi
  unsigned __int32 v9; // esi
  ULONG v11; // [rsp+30h] [rbp-10h]
  __int64 v12; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int32 v13; // [rsp+80h] [rbp+40h] BYREF
  int v14; // [rsp+88h] [rbp+48h] BYREF

  v12 = a1;
  v14 = 0;
  v2 = &off_1C005F430;
  if ( &xmmword_1C0062CD0 )
  {
    do
    {
      v4 = *((_DWORD *)v2 + 2);
      v13 = 0;
      LODWORD(v12) = v4;
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 == 3 )
        {
          LOBYTE(v11) = *((_BYTE *)v2 + 12);
          if ( (int)sub_1C0044BA0(a2, (const WCHAR *)*v2, (char *)&v14, 4u, &v12, &v13, v11) >= 0
            && v13 == 4
            && (_DWORD)v12 == 4
            && v14 )
          {
            ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int128 *, int *, __int64))v2[3])(a2, *v2, &v14, 4LL);
          }
        }
      }
      else
      {
        for ( i = 8; ; i = v9 )
        {
          PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PoolType, i, 0x42554855u);
          v8 = (char *)PoolWithTag;
          if ( !PoolWithTag )
            break;
          sub_1C001D340(PoolWithTag, 0, i);
          LOBYTE(v11) = *((_BYTE *)v2 + 12);
          if ( (sub_1C0044BA0(a2, (const WCHAR *)*v2, v8, i, &v12, &v13, v11) & 0xC0000000) == 0xC0000000 )
            goto LABEL_17;
          if ( (_DWORD)v12 != 1 )
            goto LABEL_17;
          v9 = v13;
          if ( !v13 )
            goto LABEL_17;
          if ( v13 <= i )
          {
            ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int128 *, char *, _QWORD))v2[3])(a2, *v2, v8, v13);
LABEL_17:
            ExFreePoolWithTag(v8, 0);
            break;
          }
          ExFreePoolWithTag(v8, 0);
        }
      }
      v2 += 4;
    }
    while ( *v2 );
  }
  sub_1C0044834(a2);
  return 0LL;
}
